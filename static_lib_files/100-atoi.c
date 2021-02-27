#include "holberton.h"

/**
 * _atoi - ƒ() converts ascii string to an integer.
 * @s: pointer to string input
 *
 * Return: equivalent integer value.
 */
int _atoi(char *s)
{
	int indx = 0;
	unsigned int ref = 0;
	int sign = 1;

	while (s[indx])
	{
		if (s[indx] == 45)
			sign *= -1;

		else if (s[indx] >= 48 && s[indx] <= 57)
			ref = ref * 10 + (s[indx] - 48);

		else if (ref > 0)
			break;

		indx++;
	}
	return (ref * sign);
}
