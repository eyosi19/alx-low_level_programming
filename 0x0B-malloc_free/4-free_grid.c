#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the previous allocated
 *
 * @grid: the allocated
 *
 * @height: the row
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;
	int j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
	}
}
