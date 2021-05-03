#include "holberton.h"
/**
 * _strstr - locates a substring
 * @needle: pointer
 * @haystack: pointer
 * Return: memory location of substring or Null if none
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (0);
}

