#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate a grid
 *
 * @width: the columns for the grid
 *
 * @height: the row for the grid
 *
 * Return: return the allocated
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			return (NULL);
		}
	}


	return (grid);
}


