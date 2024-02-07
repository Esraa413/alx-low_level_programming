#include "search_algos.h"

/**
 * jump_search - Searches for value in sorted
 * @array: pointer to first element
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Always EXIT_SUCCESS
 */

int jump_search(int *array, size_t size, int value)
{
	size_t x;
	size_t jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (x = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		x = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", x, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; x < jump && array[x] < value; x++)
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
