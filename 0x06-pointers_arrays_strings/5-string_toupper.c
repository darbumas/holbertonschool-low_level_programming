#include "holberton.h"

/**
 * string_toupper - ƒ() capitalzes all lowercase in string.
 * @s: pointer to char (string input)
 *
 * Return: pointer to capitalized string
 */
char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 97 && s[c] <= 122)
			s[c] -= 32;
		c++;
	}
	return (s);
}
