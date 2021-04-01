#include "holberton.h"

/**
 * main - program prints the first 50 Fibonacci numbers;
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0.
 */
int main(void)
{
	unsigned long int m = 0, p = 1, cmp = 0;
	int i = 0;

	while (i <= 49)
	{
		cmp = m + p;
		m = p;
		p = cmp;
		printf("%lu", cmp);
		if (i <= 48)
			printf("%c%c", 44, 32);
		i++;
	}
	printf("%c", 10);
	return (0);
}
