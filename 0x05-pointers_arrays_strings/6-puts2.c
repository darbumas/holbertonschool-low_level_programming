#include "holberton.h"

/**
 * puts2 - ƒ() prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer to a char (base index of string)
 * Return: void
 */
void puts2(char *str)
{
	int mark = 0;

	while (*(str + mark))
	{
		if (mark % 2 == 0)
			_putchar(*(str + mark));
		mark++;
	}
	_putchar('\n');
}

