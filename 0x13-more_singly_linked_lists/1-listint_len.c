#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: linked list of type
 * Return: Always 0
 */

size_t listint_len(const listint_t *h)
{
	size_t x;

	x = 0;
	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
