#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @str: duplicated
 * @head: new string
 * Return: the address of the new element, or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *i = malloc(sizeof(list_t));
	int len = 0;

	if (!i)
	{
		return (0);
	}
	while (str[len])
	{
		len++;
	}

	i->len = len;
	i->str = strdup(str);
	i->next = *head;
	*head = i;
	return (i);
}
