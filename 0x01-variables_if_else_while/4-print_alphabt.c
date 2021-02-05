#include <stdio.h>

int main(void)
{
  char alphabt = 'a';

  while (alphabt <= 'z')
  {
    if (alphabt != 'q' && alphabt != 'e')
      putchar(alphabt);
    alphabt++;
  }
  putchar('\n');
  return (0);
}
