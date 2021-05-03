#include "holberton.h"
/**
 * _strspn - captures length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: byte count
 */
unsigned int _strspn(char *s, char *accept)
{
	int c = 0, b = 0, b_c = 0;

	while (s[c] != '\0')
	{
		while (accept[b] != '\0')
		{
			if (accept[b] == s[c])
				b_c++;
			b++;
		}
		b = 0;
		c++;
		if (s[c] == ' ')
			break;
	}
	return (b_c);
}
