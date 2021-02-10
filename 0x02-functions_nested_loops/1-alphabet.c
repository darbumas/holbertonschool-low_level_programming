#include "holberton.h"

/**
 * print_alphabet - ƒ() prints the alphabet in lowercase with new line.
 * This ƒ() takes no argument.
 *
 * Return: The printed alphabet
 */

int print_alphabet(void)
{
  char alphabet = 'a';

  while (alphabet <= 'z')
  {
    _putchar(alphabet);
    alphabet++;
  }
  _putchar('\n');
  return (0);
}
