#include "holberton.h"

/**
 * alloc_grid - ƒ() returns a pointer to a 2D array.
 * @width: size
 * @height: size
 * Return: pointer to grid; NULL otherwise.
 */
int **alloc_grid(int width, int height)
{
	int **arr, indx1, indx2, indx3;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (!arr)
		return (NULL);

	indx1 = 0;
	while (indx1 < height)
	{
		arr[indx1] = malloc(width * sizeof(int));
		if (arr[indx1] == NULL)
		{
			indx2 = 0;
			while (indx2 < indx1)
			{
				free(arr[indx2]);
				indx2++;
			}
			free(arr);
			return (NULL);
		}
		indx3 = 0;
		while (indx3 < width)
		{
			arr[indx1][indx3] = 0;
			indx3++;
		}
		indx1++;
	}
	return (arr);
}
