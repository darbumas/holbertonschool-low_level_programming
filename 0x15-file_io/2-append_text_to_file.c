#include "main.h"

/**
 * append_text_to_file - a ƒ() that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: null terminated string to append to file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd_file, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[i] != '\0')
		i++;

	fd_file = write(fd, text_content, i);
	if (fd_file == -1)
		return (-1);

	close(fd);
	return (1);
}
