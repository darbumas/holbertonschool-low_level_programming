#include "holberton.h"

/**
 * _puts - ƒ() prints a string, followed by a new line.
 * @str: pointer to a char (string to be printed).
 *
 * Return: void.
 */
void _puts(char *str)
{
	int letter = 0;

	while (str[letter] != '\0')
	{
		_putchar(str[letter]);
		letter++;
	}
	_putchar(10);
}
