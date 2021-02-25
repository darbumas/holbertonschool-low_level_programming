#include "holberton.h"

/**
 * _strlen_recursion - ƒ() returns length of a string.
 * @s: pointer to string in buffer.
 *
 * Return: int value.
 */

int _strlen_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
		return (0);
	else
	/* calculate how many times the call is executed by increasing 1 */
		return (1 + _strlen_recursion(s + 1));
}
