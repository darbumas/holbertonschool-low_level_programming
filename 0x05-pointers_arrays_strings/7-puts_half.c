#include "holberton.h"

/**
 * puts_half - ƒ() prints half of a string,
 * followed by a new line.
 * @str: pointer to a char (base index of string).
 * Return: void.
 */
void puts_half(char *str)
{
	int str_len = _strlen(str);
	int mark;

	if ((str_len % 2) == 0)
		mark = str_len / 2;
	else
		mark = str_len - ((str_len - 1) / 2);
	int i = mark;

	while (i < str_len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}

/**
 * _strlen - ƒ() returns the length of a string.
 * @s: pointer to a char (the string in question).
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen] != '\0')
		strlen++;
	return (strlen);
}
