#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: Given string
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{

		i++;
		s++;
	}
	return (i);
}
