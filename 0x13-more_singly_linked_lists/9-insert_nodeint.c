#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node,
 * at a given position
 * @head: pointer to the first node
 * @n: data to insert
 * @idx: index where the new node
 * Return: the address and NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *node = malloc(sizeof(listint_t));
	unsigned int x;

	x = 0;

	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	new_node = *head;
	while (new_node)
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
