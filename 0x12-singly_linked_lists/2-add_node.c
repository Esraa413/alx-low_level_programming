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
	int lan = 0;

	if (!new)
	{
		return (0);
	}
	while (str[len])
	{
		lan++;
	}
	*head = i;
	i->next = *head;
	i->len = len;
	i->str = strdup(str);
	
	return (i);
}
