#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - ƒ() returns void; prints a name.
 * @name: pointer to a char holding address of name to print.
 * @f: ƒ() pointer to a ƒ() that returns void;
 * and takes as parameter a pointer to a char.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) != NULL)
		(*f)(name);
}
