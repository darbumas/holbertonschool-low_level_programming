#include "holberton.h"

/**
 * test_case - helper ƒ() to approximate root relative to number give and set
 * base cases
 * @n: given number;
 * @i: number to use for approximation.
 * Return: int value.
 */
int test_case(int n, int i)
{
	int root = i * i;
	
	if (root > n)
		return (-1);
	if (root < n)
		return (test_case(n, i + 1));
	return (i);

/**
 * _sqrt_recursion - ƒ() returns the natural square root of a number.
 * @n: input number.
 *
 * Return: int √(n).
 */
int _sqrt_recursion(int n)
{
	int i = 1;
/* use helper function to approximate root and set base cases */
	return (test_case(n, i));
}
