#include "holberton.h"

/**
 * binary_to_uint - ƒ() returns an unsigned int;
 * it converts a binary number to an unsigned int
 * @b: pointer to a string; containing 1s and 0s.
 * Return: converted number; otherwise 0, if b is NULL,
 *  or string contains any other char that's not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert, i = 0;

	if (!b)
		return (0);
	convert = 0;
	while (b[i] != '\0')
	{
		if (b[i] >= '0' && b[i] <= '1')
		{
			convert <<= 1;
			convert += b[i] - '0';
			i++;
		}
		else
			return (0);
	}
	return (convert);
}
