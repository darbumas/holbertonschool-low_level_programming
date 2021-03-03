#include "holberton.h"

/**
 * argstostr - ƒ() returns a pointer to a char;
 * concatenates all arguments given to it.
 * @ac: argument count;
 * @av: double pointer; argument vector.
 * Return: pointer to a char.
 */
char *argstostr(int ac, char **av)
{
	char *newStr = NULL;
	int row, col, count = 0, i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	row = 0;
	while (row < ac)
	{
		col = 0;
		while (av[row][col] != '\0')
		{
			count++;
			col++;
		}
		count++;
		row++;
	}
	count++;
	newStr = malloc(sizeof(char) * count);
	if (newStr == NULL)
		return (NULL);
	row = 0;
	while (row < ac)
	{
		col = 0;
		while (av[row][col] != '\0')
		{
			newStr[i] = av[row][col];
			i++;
			col++;
		}
		newStr[i] = '\n';
		i++;
		row++;
	}
	newStr[i] = '\0';
	return (newStr);
}

