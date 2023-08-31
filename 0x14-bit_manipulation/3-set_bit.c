#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to change
 * @index: the bit to set to 1
 *
 * Return: Always 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n = ((1L << index) | *n);

	return (1);
}
