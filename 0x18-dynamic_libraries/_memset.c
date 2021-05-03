#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @n: number of byte
 * @b: byte constant
 * @s: pointer to memory
 * Return: first argument (memory area)
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
