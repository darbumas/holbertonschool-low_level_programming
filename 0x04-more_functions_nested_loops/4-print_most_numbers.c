#include "holberton.h"

/**
 * print_most_numbers - ƒ() prints numbers (0 - 9),
 * omitting 2 and 4, and followed by a new line.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int count = '0';

	while (count <= '9')
	{
		if ((count != '2') && (count != '4'))
			_putchar(count);
		count++;
	}
	_putchar('\n');
}
