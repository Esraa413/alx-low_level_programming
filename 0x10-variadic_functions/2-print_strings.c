#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @n: The number of strings
 * @separator: The string to be printed
 * @...: variable number
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int sum;

	va_start(ap, n);
	for (sum = 0; sum < n; sum++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)\n");
		else
			printf("%s", str);
		if (sum != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
