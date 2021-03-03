#include "holberton.h"
/**
 * find_length - helper ƒ() returns the length of string.
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
	int s1_len, s2_len, indx1, indx2, newSpace;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = find_length(s1);
	s2_len = find_length(s2);

	nms = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (nms != NULL)
	{
		newSpace = 0;
		indx1 = 0;
		while (indx1 < s1_len)
			nms[newSpace++] = s1[indx1++];
		indx2 = 0;
		while (indx2 < s2_len)
			nms[newSpace++] = s2[indx2++];
		nms[newSpace] = '\0';
		return (nms);
	}
	else
		return (NULL);
}
