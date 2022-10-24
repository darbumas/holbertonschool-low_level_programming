#include "search_algos.h"
#include <math.h>

/**
 * jump_helper - helper function
 * @arr: pointer to the first element of the array
 * @low: lowest index of array
 * @high: highest index of array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located; or -1
 */
int jump_helper(int *arr, int low, int high, int size, int value)
{
	printf("Value found between indexes [%i] and [%i]\n", low, high);

	if (high >= size)
		high = size - 1;
	while (low <= high)
	{
		printf("Value checked array[%i] = [%i]\n",
				low, *(arr + low));
		if (*(arr + low) == value)
			return (low);
		low++;
	}
	return (-1);
}

/**
 * jump_search - searches forr a value in a sorted array of integers
 * using the 'Jump search algorithm'
 * @array: pointer to the first element
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the first index where value is located; or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int low, high, i;
	int n = sqrt(size);

	if (!array)
		return (-1);
	for (i = 0; i < (int)size; i += n)
	{
		if (*(array + i) >= value)
		{
			low = i - n;
			high = i;
			return (jump_helper(array, low, high, size, value));
		}
		printf("Value Checked array[%i] = [%i]\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
	}
	return (jump_helper(array, i - n, i, size, value));
}
