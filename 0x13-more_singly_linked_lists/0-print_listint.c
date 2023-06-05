#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  function that prints all the elements of a listint
 * @h: linked list of type
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x;

	x = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
