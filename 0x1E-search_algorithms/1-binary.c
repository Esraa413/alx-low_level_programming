#include "search_algos.h"

/**
 * binary_search - that searches for a value in a sorted array of integers
 * @array: pointer to first elemant
 * @size: namber to the elment
 * @value: The value to search
 *
 * Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x;
	size_t left, right;

	if (array == NULL)
	{
		return (-1);
	}

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		x = left
		while (x < right)
		{
			printf("%d, ", array[x]);
			x++;
		}
		printf("%d\n", array[x]);
		x = left + (right - left) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			right = x - 1;
		else
			left = x + 1;
	}
	return (-1);
}
