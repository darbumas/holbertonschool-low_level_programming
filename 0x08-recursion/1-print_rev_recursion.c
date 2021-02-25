#include "holberton.h"

/**
 * _print_rev_recursion - ƒ() prints a string in reverse by recursive call.
 * @s: pointer to string in buffer.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* simplest solution: divide problem into two (until the null byte) */
	if (*s)
	{
	/* 1st problem: recursive call with simpler original ƒ() */
		_print_rev_recursion(s + 1);
	/* 2nd problem: used to resolve the above one */
		_putchar(*s);
	}
}
