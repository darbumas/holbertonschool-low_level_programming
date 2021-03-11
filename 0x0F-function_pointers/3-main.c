#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - ƒ() returns an int;
 * takes a number of arguments and a vector to those arguments.
 * @argc: argument count.
 * @argv: vector to arguments (pointer).
 *
 * Return: int; EXIT_SUCCESS.
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc <= 3)
	{
		puts("Error");
		exit(98);
	}

	if ((*argv[2] == 37 || *argv[2] == 47) && atoi(argv[3]) == 0)
	{
		puts("Error");
		exit(100);
	}

	res = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", res);

	return (EXIT_SUCCESS);
}
