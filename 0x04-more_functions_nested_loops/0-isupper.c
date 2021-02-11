#include "holberton.h"

/**
 * _isupper - ƒ() checks for uppercase character
 * @c: character type to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
