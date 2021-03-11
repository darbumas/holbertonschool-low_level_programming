#include "variadic_functions.h"

/**
 * print_numbers - ƒ() returns void; variadic in nature. Prints numbers;
 * takes a pointer to a const char (string), and an unsigned int
 * number of arguments.
 * @separator: string to print in between numbers.
 * @n: number of arguments; integers to print.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list n_list;
	unsigned int indx;
	int lst;

	va_start(n_list, n);
	indx = 0;
	while (indx < n)
	{
		lst = va_arg(n_list, int);
		printf("%d", lst);
		if (indx < n - 1 && separator != NULL)
			printf("%s", separator);
		indx++;
	}
	printf("%c", 10);
	va_end(n_list);
}
