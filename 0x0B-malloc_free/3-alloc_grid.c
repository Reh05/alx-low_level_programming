#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - creates a 2 dimensional array of integers
  * @width: width of array
  * @height: height of array
  * Return: NULL on failure
  */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	grid = malloc(height * sizeof(*grid));
	if (height < 1 || width < 1 || grid == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == 0)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
