#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlan - function calculates the length of a given string
 * @s: string length to check
 *
 * Return: the number of nodes
 */

int _strlen(char *s)
{
	int x = 0;

	if (!s)
		return (0);

	while (*s++)
		x++;

	return (x);
}



/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf(" 0 (nil)\n");

		else
			printf(" %d %s\n ", h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);
}
