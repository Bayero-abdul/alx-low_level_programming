#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* free_grid - frees a 2 dimensional grid previously
* created by your alloc_grid function
* @grid: pointer to a 2D array
* @height: number of arrays in grid array
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
