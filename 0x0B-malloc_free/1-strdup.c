#include "holberton.h"

/**
 * _strdup - ƒ() returns a pointer from malloc; which is a string..
 * @str: pointer to a char (string in buffer).
 *
 * Return: pointer.
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int indx1, indx2, str_len = 0;

	if (str == 0)
		return (NULL);

	indx1 = 0;
	while (ptr[indx1] != '\0')
	{
		str_len++;
		indx1++;
	}
	ptr = malloc((str_len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	indx2 = 0;
	while (indx2 < str_len)
	{
		ptr[indx2] = ptr[indx2];
		indx2++;
	}
	ptr[str_len] = '\0';
	return (ptr);
}
