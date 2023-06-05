#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a listint
 * @head: pointer to the first node
 * @n: data to insert
 * Return: the address and NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node  = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
