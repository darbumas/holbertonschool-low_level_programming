#include "holberton.h"

/**
 * _puts - prints a string
 * @str: Given string
 * Return: always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
			str++;
	}
	_putchar('\n');
}
