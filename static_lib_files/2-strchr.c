#include "holberton.h"

/**
 * _strchr - ƒ() returns a pointer to a char in mem,
 * finding a specific character in string.
 * @s: pointer to string in memory.
 * @c: character to locate in string.
 * Return: pointer to first occurence of character if found,
 * or NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (0);
	}
	return (0);
}
