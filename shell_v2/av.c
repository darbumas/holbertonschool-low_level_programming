#include <stdio.h>

/**
 * main - print all arguments
 * @ac: argument count
 * @av: null terminated array of strings
 * Return: 0
 */
int main(int ac, char **av)
{
	int i = 1;

	while (av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");

	return (0);
}
