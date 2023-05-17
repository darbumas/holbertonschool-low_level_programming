#include "search_algos.h"

/**
 * binary_search - performs binary search for value in a sorted array of int
 * @array: pointer to the first element of the array to search in
 * @left: starting index of the sub-array to search within
 * @right: ending index of the sub-array to search within
 * @val: value to search for
 * Return: the index where the value is located, otherwise -1
 */
static int binary_search(int *array, size_t left, size_t right, int val)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");

		/* print the sub-array */
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		mid = left + (right - left) / 2;
		if (array[mid] == val)
			return (mid);

		/* If val is greater than mid, ignore left half */
		if (array[mid] < val)
			left = mid + 1;
		/* Else val is smaller, then ignore right half */
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array using the
 * Exponential Search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (!array)
		return (-1);

	/* Find range where element is present; doubling each iteration */
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	/* If bound value is greater than size, set it to the max index */
	if (bound >= size)
		bound = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", (bound / 2) + 1,
			bound);

	return (binary_search(array, bound / 2, bound, value));
}
