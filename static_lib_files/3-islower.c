#include "holberton.h"

/**
 * _islower - ƒ() checks for lowercase character.
 * @c: argument of type int
 * Return: Always 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
