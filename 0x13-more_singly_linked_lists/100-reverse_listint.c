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
	listint_t *next;
	listint_t *rever;

	next = NULL;
	rever = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = rever;
		rever = *head;
		*head = next;
	}

	*head = rever;
	return (*head);
}
