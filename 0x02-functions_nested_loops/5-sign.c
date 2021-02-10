#include "holberton.h"

/**
 * print_sign - ƒ() prints the sign of a number.
 * @n: argument of type int for test case.
 * Return: Always 0
 */

int print_sign(int n)
{
  if (n > 0)
  {
    _putchar('+');
    return (1);
  }
  else if (n == 0)
  {
    _putchar('0');
    return (0);
  }
  else if (n < 0)
  {
    _putchar('-');
  return (-1);
  }
  return (0);
}
