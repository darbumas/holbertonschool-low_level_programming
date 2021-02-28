#include "holberton.h"

/**
 * main - program prints number of arguments passed to it.
 * @argc: number of arguments (print this number).
 * @argv: pointer to array of strings.
 * Return: 0 success.
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	if (argc >= 0)
		printf("%d\n", argc - 1);
	return (0);
}
