#include "holberton.h"

/**
 * print_times_table - ƒ() prints the "n" times table, starting from 0.
 * @n: number passed.
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, d, prod;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (d = 0; d <= n; d++)
			{
				prod = i * d;
				if (d == 0)
					_putchar('0');
				else if (prod < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod % 10 + '0');
				}
				else if (prod > 9 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod / 10 + '0');
					_putchar(prod % 10 + '0');
				}
				else if (prod > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(prod / 100 + '0');
					_putchar((prod / 10) % 10 + '0');
					_putchar(prod % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
