#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data n of a listint
 * @head: pointer to the first node
 * Return: Always 0
 */

int sum_listint(listint_t *head)
{
	int x;

	x = 0;
	while (head)
	{
		x += head->n;
		head += head->next;
	}

	return (x);
}
