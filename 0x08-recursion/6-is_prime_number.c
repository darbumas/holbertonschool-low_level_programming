#include "holberton.h"

/**
 * test_case - ƒ() tests primarity by comparing given number to another.
 * @n: input number in buffer (original variable).
 * @prime: int variable to compare to n;
 * Return: 1 if prime, 0 otherwise.
 */
int test_case(int n, int prime)
{
	int yes = 1;
	int no = 0;

	if (n == prime)
		return (yes);
	else if ((n % prime) != 0)
		return (test_case(n, prime + 1));
	return (no);
}
/**
 * is_prime_number - ƒ() determines if input number is prime (return 1),
 * or not (return 0).
 * @n: input number.
 * Return: 1 if number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	int prime = 2;

	if (n == 1 || n == -1)
		return (0);
	return (test_case(n, prime));
}
