#include "holberton.h"

/**
 * main - program copies content of a file to another file.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	char buff[1024];
	int fildes0, fildes1, d;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fildes0 = open(argv[1], O_RDONLY);
	if (fildes0 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fildes1 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fildes1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	d = 0;
	while ((d = read(fildes0, buff, 1024)) > 0)
		if (write(fildes1, buff, d) != d)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if ((close(fildes0) == -1) || (close(fildes1) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	return (0);
}
