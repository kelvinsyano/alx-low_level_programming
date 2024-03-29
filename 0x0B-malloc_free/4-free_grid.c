#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - free 2D array
 * @grid: array
 * @height: col
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
