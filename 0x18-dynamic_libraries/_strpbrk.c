#include "holberton.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @accept: pointer
 * @s: pointer
 * Return: pointer to byte that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i])
	{
		int b = 0;

		while (accept[b])
		{
			if (s[i] == accept[b])
				return (s + i);
			b++;
		}
		i++;
	}
	return (0);
}
