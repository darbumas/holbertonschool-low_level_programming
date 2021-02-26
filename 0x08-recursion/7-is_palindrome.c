#include "holberton.h"

/**
 * find_length - helper ƒ() finds length of string recursively.
 * @s: pointer; string in buffer.
 *
 * Return: int value (length).
 */
int find_length(char *s)
{
	if (*s)
		return (1 + find_length(s + 1));
	return (0);
}
/**
 * nurses_run - helper ƒ() to compare the letters at each …
 * extreme of the string; recursively.
 * @string: pointer; string in buffer.
 * @length: int; easiest way to set the base case.
 * Return: 1 if letters match, 0 if not.
 */
int nurses_run(char *string, int length)
{
	if (length <= 0)
		return (1);
	if (string[0] == string[length - 1])
		return (nurses_run(string + 1, length - 2));
	return (0);
}
/**
 * is_palindrome - ƒ() checks if string is a palindrome.
 * @s: pointer; string in buffer.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = find_length(s);

	if (length <= 1)
		return (0);
	return (nurses_run(s, length));
}
