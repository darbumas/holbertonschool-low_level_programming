#include "holberton.h"

/**
 * main - program computes and prints the sum of all multiples of 3 or 5;
 * up to 1023.
 *
 * Return: 0.
 */
int main(void)
{
	int limit = 0, sum = 0;

	while (limit <= 1023)
	{
		if (limit % 3 == 0 || limit % 5 == 0)
		{
			sum += limit;
			limit++;
		}
		else
			limit++;
	}
	printf("%d\n", sum);
	return (0);
}
