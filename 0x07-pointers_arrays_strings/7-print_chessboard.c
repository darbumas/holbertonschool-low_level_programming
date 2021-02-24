#include "holberton.h"

/**
 * print_chessboard - ƒ() prints the chessboard.
 * @a: pointer to aggregate data stored in an array (matrix).
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;
	while (x < 8)
	{
		y = 0;
		while (++y < 8)
			_putchar(a[x][y]);
		_putchar('\n');
		++x;
	}
}
