#include "holberton.h"

/**
 * append_text_to_file - ƒ() returning an int (for process verification);
 * it appends text at the end of a file.
 * @filename: read-only pointer to file name.
 * @text_content: pointer to NULL terminated string to append.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes0, fildes1, d;

	if (filename == NULL)
		return (-1);

	fildes0 = open(filename, O_RDWR | O_APPEND);
	if (fildes0 == -1)
		return (-1);

	if (text_content == '\0')
	{
		close(fildes0);
		return (1);
	}
	d = 0;
	while (text_content[d] != '\0')
		d++;

	fildes1 = write(fildes0, text_content, d);
	if (fildes1 == -1)
		return (-1);
	close(fildes0);
	return (1);
}
