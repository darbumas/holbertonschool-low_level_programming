#include "holberton.h"

/**
 * print_numbers - ƒ() prints numbers (0 - 9).
 * followed by a new line.
 *
 * Return: void
 */
void print_numbers(void)
{
	int count = 0;

	while (count <= 9)
	{
		_putchar(count);
		count++;
	}
	_putchar('\n');
	return;
}
