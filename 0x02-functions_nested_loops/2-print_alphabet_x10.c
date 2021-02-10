#include "holberton.h"

/**
 * print_alphabet_x10 - ƒ() prints alphabet 10x by line
 *
 * Return: Always 0
 */

int print_alphabet_x10(void)
{
	int new_line = 0;

	while (new_line < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		new_line++;
	}
	return (0);
}
