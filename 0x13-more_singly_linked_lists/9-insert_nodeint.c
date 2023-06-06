#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node,
 *  at a given position
 *  @head: pointer to the first node
 *  @n: data to insert
 *  @idx: index where the new node
 *  Returns: the address and NULL
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

	if (idx == NULL)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	new_node = *head;
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
