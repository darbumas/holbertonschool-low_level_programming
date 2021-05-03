#include "holberton.h"
/**
 * *_strchr - locates a character in a string
 * @c: constant byte
 * @s: memory location
 * Return: pointer to 1st cell of c occurence
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	s = 0;

	return (s);
}
