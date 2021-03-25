#include "holberton.h"

/**
 * recursive_puts - helper ƒ() to binary number recursively.
 * @num: number print.
 *
 * Return: void.
 */
void recursive_puts(unsigned long int num)
{
	if (num == 0)
		return;
	recursive_puts(num >> 1);
	_putchar((num & 1) + '0');
}
/**
 * print_binary - ƒ() prints binary form of an unsigned number.
 * @n: number to transform into binary and print.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		recursive_puts(n);
}
