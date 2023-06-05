#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 -  function that frees a listint
 * @head: pointer to the first node
 * Return: Always 0
 */

void free_listint2(listint_t **head)
{
	listint_t free_node;

	free_node = *head;

	while
	{
		free_node = head->next;
		free(head);
	}
}
