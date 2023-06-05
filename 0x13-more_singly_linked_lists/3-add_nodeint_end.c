#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a listint
 * @head: pointer to the first node
 * @n: data to insert
 * Return: the address and NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end = malloc(sizeof(listint_t));
	listint_t *new;

	if (node_end == NULL)
		return (NULL);

	node_end->n = n;
	node_end->next = NULL;

	if (*head == NULL)
	{
		*head = node_end;
		return (node_end);
	}
	else
	{
		new = *head;
			while (new->next)
				new = new->next;
		new->next = node_end;

		return (node_end);
	}
}
