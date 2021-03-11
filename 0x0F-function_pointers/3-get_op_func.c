#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - ƒ() pointer to array of ƒ() returning ints.
 * @s: pointer to char; gets necessary ƒ() for operation.
 * Return: int: address of corresponding operator ƒ();
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

int i = 0;

	while (i != 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	puts("Error");
	exit(99);
	return (NULL);
}
