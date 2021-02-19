#include "holberton.h"

/**
 * rot13 - ƒ() encodes a string using rot13.
 * @str: pointer to a char.
 *
 * Return: pointer to encoded string.
 */
char *rot13(char *str)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int al = 0, rot;

	while (str[al])
	{
		rot = 0;
		while (alphabet[rot])
		{
			if (str[al] == alphabet[rot])
			{
				str[al] = rot_13[rot];
				break;
			}
			rot++;
		}
		al++;
	}
	return (str);
}
