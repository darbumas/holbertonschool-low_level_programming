#include "variadic_functions.h"

/**
 * sum_them_all - ƒ() returns an integer; the sum of all its' parameters.
 * @n: argument count; "unknown" number of arguments.
 *
 * Return: int -> sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list n_list;
	unsigned int indx;
	int sum;

	if (n == 0)
		return (0);
	va_start(n_list, n);

	indx = 0;
	while (indx < n)
	{
		sum += va_arg(n_list, int);
		indx++;
	}
	return (sum);
}
