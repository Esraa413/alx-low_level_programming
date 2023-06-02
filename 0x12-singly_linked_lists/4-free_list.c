#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - function that frees a list
 * @head: list to be freed
 *
 * Return: Always 0
 */

void free_list(list_t *head)
{
	list_t *tm, *node;

	if (!head)
	{
		return;
	}
	tm = head;
	while (tm)
	{
		node = tm->next;
		free(tm->str);
		free(tm);
		tm = node;
	}
}
