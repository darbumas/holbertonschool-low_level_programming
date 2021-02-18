#include "holberton.h"

/**
 * _strcpy - ƒ() copies string from pointer to buffer,
 * including NULL byte, and returns a pointer.
 * @dest: pointer to the string buffer (destination).
 * @src: pointer to the string to copy.
 * Return: pointer to buffer (destination).
 */
char *_strcpy(char *dest, char *src)
{
	int mark = 0;

	while (*(src + mark))
	{
		*(dest + mark) = *(src + mark);
		mark++;
	}
	dest[mark] = '\0';
	return (dest);
}
