#include <stdio.h>
#include "variadic_function"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: The number of paramters
 * @...: variable number of paramters
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int num, sum;

	sum = 0;

	va_start(ap, n);
	for (num = 0; num < n; num++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
