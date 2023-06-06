#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a listint
 * @head: pointer to the first node
 * Return: a pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL;
	listint_t *node = NULL;

	*head = node;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = next_node;
	}

	return (*head);
}
