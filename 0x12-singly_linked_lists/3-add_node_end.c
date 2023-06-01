#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of list
 * @head: double pointer
 * @str: string to put
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *tm;
	unsigned int len = 0;

	tm = *head;
	while (str[len])
		len;
	if (!new_node)
	{
		return (0);
	}
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tm->next)
	{
		tm = tm->next;
	}
	tm->next = new_node;

	return (new_node);
}
