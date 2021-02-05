#include <stdio.h>
#include <stdio.h>
/**
* main -  Entry point
*
* Return: Always 0
*/
int main(void)
{
	int digits = 48;
	int letters = 'a';

	while (digits <= 57)
	{
		putchar(digits);
		digits++;
	}
	while (letters < 'g')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
