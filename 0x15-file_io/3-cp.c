#include "main.h"

/**
 * main - program that copies content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: nothing
 */

int main(int argc, char **argv)
{
	int origin, dest, i = 0;
	char buffer[1024];
	char rd_err[] = "Error: Can't read from file";
	char wr_err[] = "Error: Can't write to";
	char cl_err[] = "Error: Can't close fd";

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	origin = open(argv[1], O_RDONLY);
	if (origin == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", rd_err, argv[1]);
		exit(98);
	}
	dest = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", wr_err, argv[2]);
		exit(99);
	}
	while ((i = read(origin, buffer, 1024)) > 0)
		if (write(dest, buffer, i) != i)
		{
			dprintf(STDERR_FILENO, "%s %s\n", wr_err, argv[2]);
			exit(99);
		}
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", rd_err, argv[1]);
		exit(98);
	}
	if ((close(origin) == -1) || (close(dest) == -1))
	{
		dprintf(STDERR_FILENO, "%s %s\n", cl_err, argv[1]);
		exit(100);
	}
	return (0);
}
