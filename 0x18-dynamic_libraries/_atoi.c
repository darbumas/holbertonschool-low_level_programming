#include "holberton.h"
/**
 * _atoi - convert a string to an integer
 * @s: string input
 * Return: integer value
 */
int _atoi(char *s)
{
	int i, hint;
	unsigned int fig;

	i = fig = 0;
	hint = 1;
	for (; (!(s[i] >= 48 && s[i] <= 57)) && s[i] != '\0'; i++)
	{
		if (s[i] == 45)
			hint = hint * -1;
	}
	if (s[i] == '\0')
		return (fig);
	for (; (s[i] >= 48 && s[i] <= 57) && s[i] != '\0'; i++)
	{
		fig = (fig * 10) + (s[i] - 48);
	}
	return (fig * hint);
}

