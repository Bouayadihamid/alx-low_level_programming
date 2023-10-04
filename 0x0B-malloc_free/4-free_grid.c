#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid- is a function that frees a grid
 *
 *@grid: integer
 *@height: integer
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
