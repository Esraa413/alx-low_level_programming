#include "search_algos.h"

/**
 * interpolation_search - Searches for value in sorted array
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Always EXIT_SUCCESS
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t x, i, r;

	if (array == NULL)
		return (-1);

	for (i = 0, r = size - 1; r >= i;)
	{
		x = i + (((double)(r - i) / (array[r] - array[i])) * (value - array[i]));
		if (x < size)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}

		if (array[x] == value)
			return (x);
		if (array[x] > value)
			r = x - 1;
		else
			i = x + 1;
	}

	return (-1);
}
