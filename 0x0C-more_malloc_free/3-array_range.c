#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range -  function that creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: Nothinq
 */

int *array_range(int min, int max)
{
	int *mm;
	int l, z;

	if (min > max)
	{
		return (0);
	}
	z = max - min + 1;
	mm = malloc(sizeof(int) *z);
	if (mm == 0)
	{
		return (0);
	}
	for (l = 0; min <= max; l++)
		mm[l] = min++;
	return (mm);
}
