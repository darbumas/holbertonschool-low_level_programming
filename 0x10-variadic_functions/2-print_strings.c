#include "variadic_functions.h"

/**
 * print_strings - ƒ() returns void; prints strings with new line.
 * ƒ() is variadic in nature.
 * @separator: constant pointer to a char; string in buffer for ƒ() to print.
 * @n: argument count. Number of strings print.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list n_list;
	unsigned int indx;
	char *string;

	va_start(n_list, n);
	indx = 0;

	while (indx < n)
	{
		string = va_arg(n_list, char*);
		if (string != NULL)
			printf("%s", string);
		else
			printf("%s", "(nil)");
		if (indx < n - 1 && separator != NULL)
			printf("%s", separator);
		indx++;
	}
	printf("%c", 10);
	va_end(n_list);
}
