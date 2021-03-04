#include "holberton.h"
/**
 * _strlen - helper ƒ() returns the length of a string.
 * @s: pointer to a char (the string in question).
 * Return: Length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int strlen = 0;

	while (s[strlen] != '\0')
		strlen++;
	return (strlen);
}
/**
 * string_nconcat - ƒ() returns pointer to (s1 + n_byte of s2).
 * @s1: pointer (string 1).
 * @s2: pointer (string 2).
 * @n: number of bytes to use from s2 and tack on s1.
 * Return: pointer to new space; NULL otherwise.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *space;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > 12)
		n = 12;

	space = malloc((_strlen(s1) + n + 1) * sizeof(char));

	if (space != NULL)
	{
		len1 = 0;
		i = 0;
		len2 = 0;
		while (len1 < _strlen(s1))
			space[i++] = s1[len1++];
		while (len2 < n)
			space[i++] = s2[len2++];
		space[i] = '\0';
		return (space);
	}
	else
		return (NULL);
}
