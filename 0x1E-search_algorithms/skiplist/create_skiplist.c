#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

void free_skiplist(skiplist_t *list);

/**
 * init_express - Initializes express lane of linked list
 * @list: Pointer to head node of list
 * @size: Number of nodes in list
 */
void init_express(skiplist_t *list, size_t size)
{
	const size_t step = sqrt(size);
	size_t x;
	skiplist_t *save;

	for (save = list, x = 0; x < size; ++x, list = list->next)
	{
		if (x % step == 0)
		{
			save->express = list;
			save = list;
		}
	}
}

/**
 * create_skiplist - Create single linked list
 * @array: Pointer to array used to fill the list
 * @size: Size of array
 *
 * Return: Always EXIT_SUCCESS
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *list;
	skiplist_t *node;
	size_t save_size;

	list = NULL;
	save_size = size;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_skiplist(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->express = NULL;
		node->next = list;
		list = node;
	}
	init_express(list, save_size);
	return (list);
}
