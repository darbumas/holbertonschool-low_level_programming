#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: char input_1
 * @s2: char input_2
 * Return: results of comparation
 */
int _strcmp(char *s1, char *s2)
{
	int res, i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		res = s1[i] - s2[i];

		if (res == 0)
		{
			i++;
			continue;
		}
		else
			break;
	}
	return (res);
}
