#include "holberton.h"

/**
 * _abs - ƒ() computes the absolute value of an integer.
 *
 * @x: input value for computation.
 * Return: Always 0.
 */

int _abs(int x)
{
  int absolute_value;

  if (x >= 0)
    absolute_value = x;
  else
    absolute_value = -(x);
  return (absolute_value);
}

