#include "holberton.h"
/**
 * print_diagonal - ƒ() draws a diaganal line on terminal.
 * @n: counter control
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	_putchar('\n');
	for (x = 0; x < n; ++x)
	{
		for (y = 0; y < x; ++y)
		{
			_putchar(' ');
		}
		_putchar (92);
	_putchar ('\n');
	}
}

