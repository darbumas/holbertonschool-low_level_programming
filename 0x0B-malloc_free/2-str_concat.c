#include "holberton.h"

/**
 * find_length - returns the length of string.
 * @string: pointer to string.
 * Return: length of string.
 */
int find_length(char *string)
{
	int length = 0;

	while (string[length] != '\0')
		length++;
	return (length);
}


/**
 * str_concat - ƒ() concantenates two strings.
 * @s1: pointer; string1.
 * @s2: pointer; string2.
 * Return: pointer (new memory space); otherwise NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *nms;
	int s1_len, s2_len, newSpace, i;

	if (s1)
		s1_len = find_length(s1);
	if (s2)
		s2_len = find_length(s2) + 1;

	newSpace = s1_len + s2_len;
	nms = malloc(newSpace * sizeof(char));

	if (!nms)
		return (NULL);
	i = 0;
	while (i < newSpace)
	{
		if (i < s1_len)
			nms[i] = s1[i];
		else if (i >= s1_len && i < newSpace)
			nms[i] = s2[i - s1_len];
		i++;
	}
	nms[i] = '\0';
	return (nms);
}
