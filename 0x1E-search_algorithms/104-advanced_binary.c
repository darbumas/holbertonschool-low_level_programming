#include "search_algos.h"

/**
 * recursive_search - divide and conquer binary search
 * @array: pointer to the first element of the array
 * @low: lowest index of the array
 * @high: highest index of the array
 * @value: value to search for
 * Return: index where value is located; or -1
 */
int recursive_search(int *array, int low, int high, int value)
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
	if (*(array + mid) >= value)
		return (recursive_search(array, low, mid, value));
	if (*(array + mid) < value)
		return (recursive_search(array, mid + 1, high, value));
	return (-1);
}
/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located; or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (recursive_search(array, 0, size - 1, value));
}
