#include "holberton.h"

/**
 * print_line - ƒ() prints a straigt line in terminal
 * followed by a new line.
 * @n: input value of type int
 * Return: void
 */
void print_line(int n)
{
	int x;

	x = n;
	for (n = 0; n < x; n++)
		_putchar('_');
	_putchar('\n');
}
