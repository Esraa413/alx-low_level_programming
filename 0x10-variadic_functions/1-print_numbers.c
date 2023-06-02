#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 *@separator: The string to be printed
 * @n: The number of integers
 * @...: A variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int num;

	va_start(ap, n);
	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(ap, int));

		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
