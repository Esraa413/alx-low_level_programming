#include "main.h"

/**
 * print_numbers - print 0-9
 * only useing _putchar
 * return: always 0
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
