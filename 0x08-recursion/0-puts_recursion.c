#include "holberton.h"

/**
 * _puts_recursion - ƒ() prints a string recursively.
 * @s: pointer; string in buffer.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	/* exit condition */
	if (*s)
	{
	/* split the problem into two; print the first char of string */
		_putchar(*s);
	/* then recursive call, resolve the rest of problem */
		_puts_recursion(s + 1);
		s++;
	}
	else
	/* new line */
		_putchar('\n');
}
