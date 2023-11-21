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
	int *grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(width * height * sizeof(int));

	if (grid == NULL)
	{
		return (NULL);
	}

	return (grid);
}


