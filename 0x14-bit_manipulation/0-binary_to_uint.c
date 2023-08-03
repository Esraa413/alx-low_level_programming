#include <stdio.h>
#include "main.h"

/*
 * binary_to_uint-that converts a binary number
 * @b:s pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int val = 0;

	if (!b)
		return (0);

	while (x)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		val = 2 * val + (b[x++] - '0');
		x++;
	}
	return (val);
}
