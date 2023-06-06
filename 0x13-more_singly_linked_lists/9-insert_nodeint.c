#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node
 * @idx: index where the new node
 * @n: data to insert
 * Returns: the address and NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *new_node;
	unsigned int x;

	if (node == NULL || head == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (head)
	{
		if (x == idx - 1)
		{
			node->next = new_node->next;
			new_node->next = node;
			return (node);
		}
		x++;
		new_node = new_node->next;
	}
	free(node);
	return (NULL);
}
