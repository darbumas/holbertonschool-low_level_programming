#include "main.h"

/**
 * read_textfile - a ƒ() that reads a text file and prints it to the POSIX
 * standard output
 * @filename: pointer to the file to be read
 * @letters: number of letters the ƒ() should read and print
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd_buffer, fd_letters;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	fd_buffer = read(fd, buffer, letters);
	if (fd_buffer < 0)
	{
		free(buffer);
		return (0);
	}
	fd_letters = write(STDOUT_FILENO, buffer, fd_buffer);
	if (fd_letters == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (fd_letters);
}
