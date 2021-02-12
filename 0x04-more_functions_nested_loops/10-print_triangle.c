#include "holberton.h"

/**
 * print_triangle - ƒ() prints a triangle,
 * followed by new line.
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int height, base;

	if (size <= 0)
	_putchar('\n');
	for (height = 1; height <= size; height++)
	{
		for (base = height; base < size; base++)
			_putchar(' ');
		for (base = 1; base <= height; base++)
			_putchar(35);
		_putchar(10);
	}
}
