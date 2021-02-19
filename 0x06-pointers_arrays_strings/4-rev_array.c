#include "holberton.h"

/**
 * reverse_array - ƒ() reverses array contents of type int.
 * @a: pointer to contents.
 * @n: number of contents.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int start = 0, mid;
	int end = n - 1;


	while (start < end)
	{
		mid = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = mid;
		start++;
		end--;
	}
}

