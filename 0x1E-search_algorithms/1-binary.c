#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of intergers
 * using the 'Binary search algorithm'
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: value to search for
 * Return: array index where value is found; or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *ptr = array;

	if (!array)
		return (-1);

	while (size)
	{
		for (i = 0, printf("Searching in array: "); i < size; i++)
			printf("%d%s", ptr[i], i + 1 == size ? "\n" : ", ");

		i = (size - 1) / 2;
		if (ptr[i] == value)
			return ((ptr - array) + i);
		else if (ptr[i] > value)
			size = i;
		else
		{
			ptr += (i + 1);
			size -= (i + 1);
		}
	}
	return (-1);
}
