#include <stdio.h>
#include "main.h"

/**
 * get_bit - that returns the value of a bit at a given index
 * @n: number to index
 * @index: bit to git
 * Return: Always 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > sizeof(n) * 8)
		return (-1);

	val = (n >> index) & 1;
	return (val);
}
