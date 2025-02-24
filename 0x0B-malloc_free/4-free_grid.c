#include "main.h"

/**
 * free_grid - frees memory of a 2D array
 * @grid: pointer to an array of pointers (the 2d array)
 * @height: number of rows in the Array.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
