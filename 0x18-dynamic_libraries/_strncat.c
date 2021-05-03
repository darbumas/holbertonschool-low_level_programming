#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * Return: pointer to updated dest
 * @dest: char input1
 * @src: char input2
 * @n: byte value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;

	while (*(src + j))
	{
		if (n > 0)
		{
			*(dest + i) = *(src + j);
			i++;
			n--;
		}
		j++;
	}
	return (dest);
}

