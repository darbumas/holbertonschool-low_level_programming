#include "holberton.h"

/**
 * factorial - ƒ() returns the factorial of a number.
 * @n: input number (int).
 *
 * Return: results (int).
 */
int factorial(int n)
{
	/* 3 base cases can be given 1st solution problem */
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
