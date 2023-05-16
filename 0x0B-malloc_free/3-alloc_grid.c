#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * alloc_grid - that returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: Always 0
 */

int **alloc_grid(int width, int height)
{
	int **mm;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	mm = malloc(sizeof(int *) * height);
	if (mm == 0)
	{
		return (0);
	}
	for (x = 0; x < height; x++)
	{
		mm[x] = malloc(sizeof(int) * width);
		if (mm[x] == 0)
		{
			for (; x >= 0; x--)
				free(mm[x]);
			free(mm);
			return (0);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mm[x][y] = 0;
	}
	return (mm);
}
