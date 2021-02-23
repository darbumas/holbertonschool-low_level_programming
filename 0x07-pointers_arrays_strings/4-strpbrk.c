#include "holberton.h"

/**
 * _strpbrk - ƒ() locates multiple characters in string.
 * @s: pointer to char (string to investigate)
 * @accept: pointer to char (characters which to base our search)
 * Return: pointer to the matching byte if found, Null otherwise.
 */
char *_strpbrk(char *s, char *accept)
{
	int yes, i = 1;

	while (s[i++])
	{
		for (yes = 0; accept[yes] != '0'; yes++)
		{
			if (s[i] == accept[yes])
				return (s + i);
		}
	}
	return (0);
}
