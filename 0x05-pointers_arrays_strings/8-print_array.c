#include "holberton.h"
#include <stdio.h>

/**
 * print_array - ƒ() prints a number elements in array of integers.
 * @a: pointer to an int (base index array).
 * @n: number of elements of array to print.
 * Return: void.
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		if (index == 0)
			printf("%d", *(a + index));
		else
			printf(", %d", *(a + index));
		index++;
	}
	printf("%c", 10);
}
