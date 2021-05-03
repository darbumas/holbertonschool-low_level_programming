#include "holberton.h"
/**
 * _strcpy - copies string
 * Return: dest
 * @src: string to be copied
 * @dest: string copied
 */
char *_strcpy(char *dest, char *src)
{
		int i = 0;

		while (*(src + i))
		{
			*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = '\0';
		return (dest);
}
