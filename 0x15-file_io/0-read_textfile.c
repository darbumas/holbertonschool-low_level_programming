#include "holberton.h"

/**
 * read_textfile - ƒ() reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file to read
 * @letters: number of letters to read and write.
 * Return: actual count of letters read and written.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes0, fildes1, fildes2;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);

	fildes0 = open(filename, O_RDONLY);
	if (fildes0 < 0)
		return (0);

	fildes1 = read(fildes0, buff, letters);
	if (fildes1 < 0)
	{
		free(buff);
		return (0);
	}

	fildes2 = write(STDOUT_FILENO, buff, fildes1);
	if (fildes2 == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fildes0);
	return (fildes2);
}

