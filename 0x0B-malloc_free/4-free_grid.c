#include "main.h"

/**
 * free_grid - free some memory allocated
 * @grid: the grid of pointer
 * @height: the height of the grid
 * Return - it retuns voids
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
