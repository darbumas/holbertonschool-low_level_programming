#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - ƒ() prints the sum of two diagonals of a square matrix.
 * @a: pointer to an int (a[0]).
 * @size: size of matrix (column size)
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size * size)
	{
		if (i % (size + 1) == 0)
		{
			sum1 += *(a + i);
		}
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
		{
			sum2 += *(a + i);
		}
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
