#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to the list_t in printf
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL) 
	{
		if (h->str == NULL)
			printf("%d %s\n", 0, "(nil)");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		n++;
	}

	return (n);
}
