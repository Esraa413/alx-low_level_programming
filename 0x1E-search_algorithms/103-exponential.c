#include "search_algos.h" 

/**
 * _binary_search - Searches for value in sorted array
 * @array: pointer to first element of array to search
 * @left: starting index of [sub]array to search
 * @right: ending index of [sub]array to search
 * @value: The value to search for.
 *
 * Return: Always EXIT_SUCCESS
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		x = left;
		while (x < right)
		{
			printf("%d, ", array[x]);
			x++;
		}
		printf("%d\n", array[x]);

		x = left + (right - left) / 2;
		if (array[i] == value)
			return (x);
		if (array[i] > value)
			right = x - 1;
		else
			left = x + 1;
	}

	return (-1);
}

/**
  * exponental_search - Searches for value in sorted array
  * @array: pointer to first element of array to search.
  * @size: number of elements in array.
  * @value: value to search for.
  *
  * Return: Always EXIT_SUCCESS
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0;
	size_t right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}

	right = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, right);
	return (_binary_search(array, x / 2, right, value));
}
