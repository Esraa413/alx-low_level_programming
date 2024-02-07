#include "search_algos.h"

/**
 * linear_search - Searches a value in an array using a linear search.
 * @array: array to search in.
 * @size: length of the array.
 * @value: value to look for.
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (!array || size == 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}

	return (-1);
}
