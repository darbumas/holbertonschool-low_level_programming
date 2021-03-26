#include "holberton.h"

/**
 * get_bit - ƒ() returns an int (which is the value of a bit).
 * @n: number; type unsigned long int.
 * @index: index at which the bit of interest is sitting.
 * Return: int value of bit at given index; otherwise -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	n >>= index;
	return (n & 1);
}
