#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_djb2 - implementation the djb2 algorithm
 * @str: used to generate hash value of string
 *
 * Return: Always EXIT_SUCCESS.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int x;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + x;
		/* hash * 33 + x */
	}

	return (hash);
}
