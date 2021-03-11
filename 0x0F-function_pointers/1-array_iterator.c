#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - ƒ() returns void;
 * executes a ƒ() given as a parameter on each element of an array.
 * @array: elements for the call-back ƒ().
 * @size: size of the array.
 * @action: pointer to the call-back ƒ().
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if ((*action) != NULL)
	{
		while (i < size && array != NULL)
			(*action)(array[i++]);
	}
}
