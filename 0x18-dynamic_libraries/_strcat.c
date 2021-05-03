#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * Return: dest ptr
 * @src: char input1
 * @dest: char input2
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;

	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
