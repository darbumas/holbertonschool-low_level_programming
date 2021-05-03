#include "holberton.h"
/**
 * *_memcpy - copies memory area
 * @n: bytes from memory
 * @src: constant
 * @dest: memory area
 * Return: 1st argument (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];

		i++;
	}
	return (dest);
}
