#include <stdio.h>
#include "main.h"

/*
 * print_binary - equivalent of a decimal number
 * @n: number to print in the binary
 *
 * Return (void)
 */

void print_binary(unsigned long int n)
{
	int num = sizeof(n) * 8;
	int count = 0;

	while (num)
	{

		if (n & 1L << --num)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');

}
