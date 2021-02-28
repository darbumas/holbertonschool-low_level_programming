#include "holberton.h"

/**
 * main - program that prints the first argument to command-line.
 * @argc: argument count (to main).
 * @argv: argument vector (array of strings).
 * Return: 0 success.
 */

int main(int argc, char **argv)
{
	if (argc >= 0)
		printf("%s\n", *argv);
	return (0);
}
