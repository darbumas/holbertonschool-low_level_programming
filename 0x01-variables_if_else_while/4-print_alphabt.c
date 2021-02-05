#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabt = 'a';

	while (alphabt <= 'z')
	{
		if (alphabt != 'q' && alphabt != 'e')
			putchar(alphabt);
	alphabt++;
	}
	putchar('\n');
	return (0);
}
