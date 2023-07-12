#include "main.h"

/**
 * free_grid - frees 2d array
 * @grid: pointer to array
 * @height: number of rows in grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
