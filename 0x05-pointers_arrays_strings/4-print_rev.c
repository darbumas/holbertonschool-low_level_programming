#include "holberton.h"

/**
 * print_reserve - ƒ() prints a string in reverse,
 * followed by a new line.
 * @s: pointer to a char (string).
 * Return: void
 */
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
	{
		rev++;
	}
	/* starting from the end of string, one spot from nul */
	rev = rev - 1;

	while (rev >= 0)
	{
		_putchar(s[rev]);
		rev--;
	}
	_putchar(10);
}
