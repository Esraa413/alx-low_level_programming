#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @n: The number of integers
 * @...: A variable number
 * @separator: The string to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int num;

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
