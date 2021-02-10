#include "holberton.h"

/**
 * print_last_digit - ƒ() prints the last digit of a number.
 * @x: int variable for ƒ() argument
 * Return: Always 0
 */

int print_last_digit(int x)
{
	int last_digit;

	if (x < 0)
		last_digit = -(x % 10);
	else
		last_digit = (x % 10);
	_putchar(last_digit + '0');
	return (last_digit);
}
