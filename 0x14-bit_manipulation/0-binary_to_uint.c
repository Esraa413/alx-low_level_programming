#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - that converts a binary number
 * @b: is pointing to string of 0 and 1 chars
 *
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int val = 0;

	if (!b)
		return (0);

	while (b[x])
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		val = 2 * val + (b[x] - '0');
		x++;
	}
	return (val);
}
