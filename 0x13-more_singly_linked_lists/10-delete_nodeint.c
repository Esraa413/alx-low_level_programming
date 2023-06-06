#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listin
 * @head: pointer to the first node
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *del_node = NULL;
	unsigned int x;

	x = 0;
	node = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (node)
	{
		if (x == index)
		{
			del_node->next = node->next;
			free(node);
			return (1);
		}
		x++;
		del_node = node;
		node = node->next;
	}
	return (-1);
}
