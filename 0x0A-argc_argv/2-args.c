#include "holberton.h"

/**
 * main - program prints all arguments supplied to job control.
 * @argc: argument count.
 * @argv: argument vector (pointer to array of strings).
 * Return: 0 success.
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
