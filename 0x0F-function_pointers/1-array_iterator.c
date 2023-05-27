#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  function given as a parameter on each element of an array
 * @size: the size of array
 * @array: int array
 * @action: pointer to print
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *i = array + size - 1;

	if (array || size || action)
		while (array <= i)
			action(*array++);
}
