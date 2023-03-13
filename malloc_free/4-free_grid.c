#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free the space in memory previously allocated for a 2D array
 *
 * @grid: Input 2D array
 * @height: Input int, height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
