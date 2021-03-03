#include "holberton.h"

/**
 * create_array - ƒ() creates an array of chars,
 * and initializes it with specific chars.
 * @size: array size.
 * @c: char to initialize array with.
 * Return: pointer to array; otherwise NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *array_ptr;
	unsigned int chars_input = 0;

	if (size <= 0)
		return (NULL);
	array_ptr = malloc(size * sizeof(c));

	if (array_ptr == NULL)
		return (NULL);

	while (chars_input < size)
	{
		array_ptr[chars_input] = c;
		chars_input++;
	}
	return (array_ptr);
}
