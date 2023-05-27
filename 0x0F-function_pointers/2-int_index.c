#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: int array
 * @size: size of array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0 if false
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == 0 || size <= 0 || cmp == 0)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
