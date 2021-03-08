#include "holberton.h"

/**
 * _realloc - ƒ() tries to allocate new block of memory;
 * changes the memory-size allocated by a previous call to malloc.
 * @ptr: pointer; returned by call to malloc (original).
 * @old_size: original size.
 * @new_size: size of new block of memory.
 * Return: pointer to new mem; NULL otherwise.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;

	if (new == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			Return (NULL);
		return (ptr);
	}
	if (new_size > old_size)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			return (NULL);
		}
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}


