#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees two-dim array (grid) from memory
 * @grid: to be freed
 * @height: height dimension of grid to be freed
 *
 * Return: nothing
 *
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
