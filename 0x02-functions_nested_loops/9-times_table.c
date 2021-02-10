#include "holberton.h"

/**
 * times_table - ƒ() prints the 9 times table, from 0
 *
 * Return: Always 0
 */
void times_table(void)
{
  for (int x = 0; x <= 9; x++)
  {
    for (int y = 0; y <= 9; y++)
    {
      int mult = (x * y);

      if (y == 0)
        _putchar(mult + '0');
      else if (mult <= 9)
      {
        _putchar(',');
        _putchar(' ');
        _putchar(' ');
        _putchar(mult + '0');
      }
      else if (mult >= 10)
      {
        _putchar(',');
        _putchar(' ');
        _putchar(mult / 10 + '0');
        _putchar(mult % 10 + '0');
      }
    }
    _putchar('\n');
  }
}
