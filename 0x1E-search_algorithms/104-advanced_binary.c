#include "search_algos.h"

/**
 * recursive_binary - binary search using recursion
 * @array: array of int elements
 * @low: first element in array
 * @high: last element in array
 * @value: value to search for
 * Return: index of the value if found, or -1 otherwise.
 */
int recursive_binary(int *array, int low, int high, int value)
{
	int mid, i;

	printf("Searching in array: ");

	for (i = low; i < high; i++)
		printf("%i, ", *(array + i));
	printf("%i\n", *(array + i));
	mid = ((high - low) / 2) + low;
	if (*(array + mid) == value && *(array + (mid - 1)) != value)
		return (mid);
	if (low == high)
		return (-1);
	else if (*(array + mid) >= value)
		return (recursive_binary(array, low, mid, value));
	else if (*(array + mid) < value)
		return (recursive_binary(array, mid + 1, high, value));
	return (-1);
}
/**
 * advanced_binary - advanced implementation of the binary
 * search algorithm
 * @array: pointer to the first int element in the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index for the found value or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (recursive_binary(array, 0, size - 1, value));
}
