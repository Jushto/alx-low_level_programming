#include "main.h"

/**
 * free_grid - functrion to free a 2-d grid
 * @grid: 2-d array
 * @height: height of the array
 *
 * Return: nothin
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
