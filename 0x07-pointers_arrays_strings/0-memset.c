#include "holberton.h"

/**
 * _memset - ƒ() returns a pointer to a memory address,
 * filled with a constant byte.
 * @s: pointer to mem area.
 * @b: constant byte to fill mem (type char).
 * @n: size of memory area to be filled (given in n bytes)
 * Return: first argument (pointer).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
