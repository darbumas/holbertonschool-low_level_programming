#include "holberton.h"

/**
 * main - program that adds positive numbers;
 * prints the result.
 * @argc: argument count.
 * @argv: argument vector (pointer to an array of strings).
 * Return: EXIT_SUCCESS, otherwise EXIT_FAILURE.
 */
int main(int argc, char **argv)
{
	int first_arg, next_arg;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (EXIT_SUCCESS);
	}

	first_arg = 1;
	while (first_arg < argc)
	{
		next_arg = 0;
		while (argv[first_arg][next_arg] != '\0')
		{
			if (argv[first_arg][next_arg] < '0' || argv[first_arg][next_arg] > '9')
			{
				printf("%s\n", "Error");
				return (EXIT_FAILURE);
			}
			next_arg++;
		}
		sum = sum + atoi(argv[first_arg]);
		first_arg++;
	}
	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
