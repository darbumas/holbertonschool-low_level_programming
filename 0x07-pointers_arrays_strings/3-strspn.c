#include <stdio.h>

/**
 * _strspn - ƒ() computes string array index.
 * @s: pointer to string to span.
 * @accept: pointer to string characters to compare.
 * Return: number of byte in the initial segment of s which consist only of
 * bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int yes, i, count = 0;

	i = 0;
	while (s[++i])
	{
		for (yes = 0; accept[yes] != '\0'; yes++)
		{
			if (s[i] == accept[yes])
				count++;
		}
	}
	return (count - 1);
}
