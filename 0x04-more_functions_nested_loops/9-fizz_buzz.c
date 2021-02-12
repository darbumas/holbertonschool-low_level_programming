#include "holberton.h"
/**
 * main - Fizz-Buzz program entry
 *
 * Return: 0
 */
int main(void)
{
	char three[] = "Fizz";
	char five[] = "Buzz";
	char three_five[] = "FizzBuzz";
	int my_counter = 0;

	while (++my_counter <= 100)
	{
		if ((my_counter % 3 == 0) && (my_counter % 5 == 0))
			printf("%s ", three_five);
		else if (my_counter % 3 == 0)
			printf("%s ", three);
		else if ((my_counter % 5 == 0) && (my_counter != 100))
			printf("%s ", five);
		else if (my_counter % 5 == 0)
			printf("%s", five);
		else
			printf("%d ", my_counter);
	}
	printf("%c", '\n');
	return (0);
}
