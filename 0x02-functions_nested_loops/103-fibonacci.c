#include "holberton.h"

/**
 * main - program finds and prints the sum of the even-valued terms
 * found in the Fibonnacci sequence (starting from 1 and 2).
 *
 * Return: 0.
 */
int main(void)
{
	unsigned long int m = 0, p = 1, c = 0, cmp = 0;
	int i = 0;

	while (c < 4000000)
	{
		c = m + p;
		m = p;
		p = c;
		if (c % 2 == 0)
			cmp += c;
		i++;
	}
	printf("%lu\n", cmp);
	return (0);
}
