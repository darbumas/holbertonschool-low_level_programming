#include "holberton.h"

/**
 * _memcpy - ƒ() returns a pointer to a memory address,
 * with a copied string.
 * @dest: pointer to mem area with copy.
 * @src: pointer to mem area with original.
 * @n: size of memory area to be copied/filled.
 * Return: first argument (pointer to destination).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}
	return (dest);
}
