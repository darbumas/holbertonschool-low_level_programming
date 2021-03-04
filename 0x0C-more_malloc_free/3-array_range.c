#include "holberton.h"

/**
 * array_range - ƒ() returns pointer to int, creates array of int.
 * @min: range min.
 * @max: range max.
 * Return: pointer to array, otherwise NULL.
 */
int *array_range(int min, int max)
{
	int *space, size = ((max - min) + 1), i;

	if (min > max)
		return (NULL);

	space = malloc(size * sizeof(int));

	if (space == NULL)
		return (NULL);

	i = 0;
	while (i < size)
		space[i++] = min++;

	return (space);
}
