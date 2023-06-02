#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: The number of paramters
 * @...: variable number of paramters
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0, num = n;

	if (!n)
		return (0);
	va_start(ap, n);
	while (num--)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
