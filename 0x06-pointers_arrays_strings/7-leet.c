#include "holberton.h"
/**
 * leet - ƒ() encodes a string into 1337.
 * @str: pointer to char.
 * Return: pointer to encoded string.
 */
char *leet(char *str)
{
	int up[] = {65, 69, 79, 84, 76};
	int low[] = {97, 101, 111, 116, 108};
	int d[] = {52, 51, 48, 55, 49};
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == up[j] || str[i] == low[j])
			{
				str[i] = d[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
