#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a2z;

	for (a2z = 'a'; a2z <= 'z'; a2z++)
		putchar(a2z);
	for (a2z = 'A'; a2z <= 'Z'; a2z++)
		putchar(a2z);
	putchar('\n');
	return (0);
}
