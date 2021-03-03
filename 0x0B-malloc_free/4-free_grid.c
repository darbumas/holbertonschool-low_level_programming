#include "holberton.h"

/**
 * free_grid - ƒ() frees 2D grid previously allocated by alloc_grid().
 * @grid: array of pointers to int.
 * @height: size of array.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int indx = 0;

	while (indx < height)
	{
		free(grid[indx]);
		indx++;
	}
	free(grid);
}
