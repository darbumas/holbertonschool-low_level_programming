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
	int indx1, indx2;

	if (str == 0)
		return (NULL);

	indx1 = 0;
	while (str[indx1])
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
