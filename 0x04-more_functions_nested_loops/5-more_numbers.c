#include "holberton.h"

/**
 * more_numbers - ƒ() prints number (0 - 14) 10x,
 * followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int loop_1 = 0;

	while (loop_1 < 10)
	{
		int loop_2 = 0;

		while (loop_2 < 15)
		{
			if (loop_2 >= 10)
			{
				_putchar (loop_2 / 10 + '0');
			}
			_putchar (loop_2 % 10 + '0');
			loop_2++;
		}
		_putchar ('\n');
		loop_1++;
	}
}

