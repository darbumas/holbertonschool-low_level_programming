#include "holberton.h"

/**
 * create_file - ƒ() creates a file.
 * @filename: read-only pointer to the file to be created.
 * @text_content: Null terminated string to write into file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fildes0, fildes1, d;

	if (filename == NULL)
		return (-1);

	fildes0 = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fildes0 == -1)
		return (-1);

	if (text_content == '\0')
		return (1);
	d = 0;
	while (text_content[d] != '\0')
		d++;
	fildes1 = write(fildes0, text_content, d);
	if (fildes1 == -1)
		return (-1);
	close(fildes0);
	return (1);
}

