#include "holberton.h"

/**
 * _strdup - ƒ() returns a pointer from malloc; which is a copy of string..
 * @str: pointer to a char (string in buffer to copy).
 *
 * Return: pointer to new space in memory; or NULL.
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int indx1, indx2;

	if (str == 0)
		return (NULL);

	indx1 = 0;
	while (str[indx1])
		indx1++;

	indx1++;
	ptr = malloc(indx1 * (sizeof(char)));
	if (ptr == NULL)
		return (NULL);

	indx2 = 0;
	while (indx2 <= indx1)
	{
		ptr[indx2] = str[indx2];
		indx2++;
	}
	return (ptr);
}
