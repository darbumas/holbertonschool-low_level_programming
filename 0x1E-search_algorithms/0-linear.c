#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using linear search algorithms
 * @array: array of integers
 * @size: number of elements in the array
 * @value: element to search for
 * Return: an integer (the value or -1 if not found)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
