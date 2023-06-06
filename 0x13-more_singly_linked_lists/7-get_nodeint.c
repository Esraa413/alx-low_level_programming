#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint
 * @head: pointer to the first node
 * @index: index of the node
 * Return: Always 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int x;

	node = head;
	x = 0;

	while (node && x < index)
	{
		node = node->next;
		x++;
	}
	return (node);
}
