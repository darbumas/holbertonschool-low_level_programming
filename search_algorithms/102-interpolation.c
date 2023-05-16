#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array using the
 * Interpolation Search Algorithm
 * @array: pointer to the first element of the array to search through
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first idx where value is located, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
		return (-1);

	/**
	 * Iterate through the array while whithin bounds of low to high index
	 * of sorted array and if target is whithin range of those bounded values
	 */
	while ((array[high] != array[low]) && (value >= array[low]) &&
			(value <= array[high]))
	{
		/* Interpolation formula */
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		printf("Value checked array[%zu] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}
	if (value == array[low])
	{
		printf("Value checked array[%zu] = [%d]\n", low, array[low]);
		return (low);
	}
	else
	{
		printf("Value checked array[%zu] is out of range\n", pos);
		return (-1);
	}
}
