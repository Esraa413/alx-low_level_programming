#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print hash tabele
 * @ht: print hash tabele
 *
 * Return: Always EXIT_SUCCESS.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *tmp;
	char fl = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	x = 0;
	while (x < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (fl == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			fl = 1;
			tmp = tmp->next;
		}
		x++;
	}
	printf("}\n");
}
