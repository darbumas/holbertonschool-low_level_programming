#include "holberton.h"

/**
 * main - program prints minimum number of coins for some amount money given in
 * cents.
 * @argc: argument count (at least 2).
 * @argv: pointer to an array of strings (2 separate strings max).
 * Return: EXIT_SUCCESS, or EXIT_FAILURE.
 */
int main(int argc, char **argv)
{
	int cents;
	int coins = 0;
	int quarter = 25;
	int dime = 10;
	int nickel = 5;
	int penny = 1;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (EXIT_FAILURE);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= quarter)
			cents = cents - quarter;
		else if (cents >= dime)
			cents = cents - dime;
		else if (cents >= nickel)
			cents = cents - nickel;
		else if (cents >= penny)
			cents = cents - penny;
		coins++;
	}
	printf("%d\n", coins);
	return (EXIT_SUCCESS);
}
