#include "holberton.h"

/**
 * swap_int - ƒ() swaps the values of two integers.
 * @a: pointer to an int.
 * @b: pointer to an int.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int stand_by;

	stand_by = *a;
	*a = *b;
	*b = stand_by;
}
