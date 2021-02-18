#include "holberton.h"

/**
 * _strncat - ƒ() concatenates two strings.
 * @dest: pointer to first string.
 * @src: pointer to second string.
 * @n: specified number of bytes to be used from src.
 * Return: pointer to destination (new string)
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	d = s = 0;
	while (dest[d])
	{
		d++;
	}
	while (src[s] && s < n)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	return (dest);
}
