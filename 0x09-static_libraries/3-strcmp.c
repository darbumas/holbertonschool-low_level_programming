#include "holberton.h"

/**
 * _strcmp - ƒ() compares two strings.
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 * Return: the difference -> int value.
 */
int _strcmp(char *s1, char *s2)
{
	int diff, s = 0;

	while (s1[s] && s2[s])
	{
		diff = s1[s] - s2[s];

		if (diff == 0)
		{
			s++;
			continue;
		}
		else
			break;
	}
	return (diff);
}
