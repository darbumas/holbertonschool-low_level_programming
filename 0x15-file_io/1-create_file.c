#include "main.h"

/**
 * create_file - a ƒ() that creates a file
 * @filename: pointer to the file to be created
 * @text_content: null terminated pointer to string to write to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fd_file, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (*text_content == '\0')
		return (1);

	while (text_content[i] != '\0')
		i++;

	fd_file = write(fd, text_content, i);
	if (fd_file == -1)
		return (-1);

	close(fd);
	return (1);
}
