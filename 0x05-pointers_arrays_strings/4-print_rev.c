#include "main.h"

/**
 * print_rev - prints reverse string , followed by a new line
 * @@s: string to print 
 * return: (0)
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
