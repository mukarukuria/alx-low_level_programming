#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D dimensional grid preview
 *		created by the alloc_grid function in file 3-alloc_grid.c
 * @grid: previously created grid
 * @height: height of grid
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
