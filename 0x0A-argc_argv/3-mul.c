#include "holberton.h"

/**
 * _atoi - helper ƒ() converts ascii string to int.
 * @s: pointer to string in buffer.
 *
 * Return: equivalent int value.
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
/**
 * main - multiplies two numbers
 * @argc: argument count (three minimum for success).
 * @argv: argument vector (pointing to two pointers to int).
 * Return: 0 for success, 1 for error.
 */

int main(int argc, char **argv)
{
	int product;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
		product = (_atoi(argv[1]) * _atoi(argv[2]));
		printf("%d\n", product);
		return (EXIT_SUCCESS);
}
