#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - ƒ() returns int; searches for an integer;
 * the ƒ() takes a pointer to a normal array, size of array and a ƒ() pointer
 * returning an int as parameter.
 * @array: elements for the call-back ƒ().
 * @size: size of the array.
 * @cmp: pointer to a ƒ() to compare values.
 * Return: int; index of the first element for which the cmpƒ() succeeds, -1
 * otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	while (size > 0 && i < size && array != NULL)
	{
		if (cmp(array[i++]))
			return (i - 1);
	}
	if (*(array + i) == '\0')
		return (-1);
	return (-1);
}
