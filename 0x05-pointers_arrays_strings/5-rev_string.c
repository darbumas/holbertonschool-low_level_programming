#include "holberton.h"

int _strlen(char *);
/**
 * rev_string - ƒ() reverses a string.
 * @s: pointer to a char (base index of string)
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int str_end = _strlen(s);
	int str_beg = 0;
	char l;

	for (str_end = (str_end - 1); str_end > str_beg; str_end--)
	{
		l = s[str_beg];
		s[str_beg] = s[str_end];
		s[str_end] = l;
		str_beg++;
	}
}
int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen] != '\0')
		strlen++;
	return (strlen);
}
