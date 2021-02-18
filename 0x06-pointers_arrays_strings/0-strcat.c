#include "holberton.h"

/**
 * _strcat - ƒ() concatenates two strings.
 * @dest: points to destination of string.
 * @src: points to source of string.
 * Return: pointer to destination (new string)
 */
char *_strcat(char *dest, char *src)
{
	int d, s;

	d = s = 0;
	while (dest[d])
	{
		d++;
	}
	while (src[s])
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	return (dest);
}
