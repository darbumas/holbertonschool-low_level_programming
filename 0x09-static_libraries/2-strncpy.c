#include "holberton.h"

/**
 * _strncpy - ƒ() copies a string.
 * @dest: pointer to first string.
 * @src: pointer to second string.
 * @n: specified number of bytes to be used from src.
 * Return: pointer to destination (new string)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d, s;

	d = s = 0;
	while (src[s] && s < n)
		dest[d++] = src[s++];

	while (d < n)
		dest[d++] = '\0';

	return (dest);
}
