#include "holberton.h"
/**
 * _strncpy - Function that copies a string
 * @dest: destination pointer
 * @src: Sources pointer
 * @n: size value
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
