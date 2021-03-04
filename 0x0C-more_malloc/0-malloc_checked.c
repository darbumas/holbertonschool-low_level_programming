#include "holberton.h"

/**
* malloc_checked - ƒ() returns pointer to allocated.
* @b: number of bytes to allocate.
*
* Return: pointer to mem space, othewise process termination (exit(98)).
*/
void *malloc_checked(unsigned int b)
{
	int *space;

	space = malloc(b);
	if (space == NULL)
	{
		exit (98);
	}
	return (space);
}
