#include <stdio.h>
#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: Always 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num;
	int count = 0;
	unsigned long int cur;
	unsigned long int bit_num = n ^ m;

	for (num = 63; num >= 0; num--)
	{
		cur = bit_num >> num;
		if (cur & 1)
			count++;
	}
	return (count);
}
