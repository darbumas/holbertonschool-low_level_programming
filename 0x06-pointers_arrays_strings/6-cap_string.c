#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to char (string to cap).
 *
 * Return: pointer to cap- string.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while (!(s[i] >= 97 && s[i] <= 122))
		{
			i++;
			continue;
		}
		if (s[i - 1] == ',' ||
		    s[i - 1] == ';' ||
		    s[i - 1] == '.' ||
		    s[i - 1] == '!' ||
		    s[i - 1] == '?' ||
		    s[i - 1] == '"' ||
		    s[i - 1] == '(' ||
		    s[i - 1] == ')' ||
		    s[i - 1] == '{' ||
		    s[i - 1] == '}' ||
		    s[i - 1] == 10 ||
		    s[i - 1] == 0 ||
		    s[i - 1] == 9 ||
		    s[i - 1] == 32)
			s[i] -= 32;
		i++;
	}
	return (s);
}
