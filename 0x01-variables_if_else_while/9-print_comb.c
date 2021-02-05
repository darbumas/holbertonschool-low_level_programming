#include <stdio.h>

/**
* main -  Entry point
*
* Return: Always 0
*/
int main(void)
{
	int pssbl_combo = 48;

	while (pssbl_combo < 58)
	{
		putchar(pssbl_combo);
		if (pssbl_combo != 57)
		{
			putchar(',');
			putchar(' ');
		}
		pssbl_combo++;
	}
	putchar('\n');
	return (0);
}
