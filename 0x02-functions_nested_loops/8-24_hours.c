#include "holberton.h"

/**
 * jack_bauer - ƒ() prints 24 hours (by min) military time
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	for (int hrs = 0; hrs < 24; hrs++)
	{
		for (int min = 0; min < 60; min++)
		{
			_putchar(hrs / 10 + '0');
			_putchar(hrs % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
