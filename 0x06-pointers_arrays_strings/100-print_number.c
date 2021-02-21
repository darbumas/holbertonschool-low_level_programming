#include "holberton.h"

/**
 * print_number - ƒ() prints multiple integers.
 * @number: the number to print.
 *
 * Return: void.
 */
void print_number(int number)
{
	unsigned int num = number;

	if (number < 0)
	{
		_putchar(45);
		num = -num;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + 48);
}
