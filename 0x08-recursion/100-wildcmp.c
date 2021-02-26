#include "holberton.h"

/**
 * special_char - helper ƒ() for the case exclusions involving '*'.
 * @s1: pointer; string in buffer.
 * @s2: pointer; string in buffer.
 * @s1_0: pointer; tracks s1 for the length.
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int special_char(char *s1, char *s2, char *s1_0)
{
	if (*s2 == '*')
	{
		++s2;
		return (special_char(s1, s2, s1_0));
	}
	else if (*s2 == '\0')
	{
		if (*s1 == *s1_0)
			return (1);
		else if (*s2 != *s1)
			return (0);
		return (1);
	}
	else if (*s1 != *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		return (special_char(s1, s2, s1_0));
	}
	else if (*s1 == '\0')
		return (0);
	s1++;
	s2++;
	return (special_char(s1, s2, s1_0));
}
/**
 * wildcmp - ƒ() returns 1 if two strings are similar.
 * @s1: pointer; string in buffer.
 * @s2: pointer; string in buffer.
 * Return: 1 if strings identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	char *s1_0 = s1;

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
	{
		s1++;
		s2++;
		return (wildcmp(s1, s2));
	}
	else if (*s2 == '*')
		return (special_char(s1, s2, s1_0));
	return (0);
}
