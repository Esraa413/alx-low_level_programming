#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to the list in printf
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("0 (nil)\n");

		else
			printf("%u %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
}
