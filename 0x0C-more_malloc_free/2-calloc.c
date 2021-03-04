#include "holberton.h"

/**
 * _calloc - ƒ() returns pointer to mem space for an array.
 * @nmemb: number of elements for array to hold.
 * @size: byte size of each element.
 * Return: pointer; or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *space;
	unsigned int array_size = (nmemb * size), i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(array_size);
	if (space == NULL)
		return (NULL);

	while (i < array_size)
		space[i++] = 0;
	return (space);
}

