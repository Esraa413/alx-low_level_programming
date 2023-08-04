#include <stdio.h>
#include "main.h"

/*
 * print_binary - prints the binary representation of a number
 * @n: number to print
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
