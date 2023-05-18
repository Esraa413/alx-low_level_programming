#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: Always 0
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (i == 0)
		exit(98);
	return (i);
}
