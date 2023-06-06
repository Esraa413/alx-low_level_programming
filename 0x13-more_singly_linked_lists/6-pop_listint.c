#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint -  function that deletes the head node and returns the head
 * @head: pointer to the first node
 * Return: Always 0
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	pop = (*head)->next;
	free(*head);
	*head = pop;


	return (x);
}
