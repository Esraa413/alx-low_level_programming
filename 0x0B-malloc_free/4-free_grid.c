#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid
 * Description: frees memory of grid
 * @height: height dimension of grid
 * @grid: should be initialized
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
