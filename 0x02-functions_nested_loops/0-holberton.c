#include "holberton.h"

/**
 * main - Program start
 *
 * Return: Always 0
 */

int main(void)
{
  char school[] = "Holberton";
  int i = 0;

  while (i < 9)
  {
    _putchar(school[i]);
    i++;
  }
  _putchar('\n');
  return (0);
}
