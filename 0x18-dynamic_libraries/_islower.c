#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: c is an int
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
