#include "holberton.h"

/**
 * _isdigit - ƒ() checks for a digit
 * @c: input type int
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
