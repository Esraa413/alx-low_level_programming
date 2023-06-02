#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 * Return: Always 0
 */

void print_all(const char * const format, ...)
{
	int x;
	char *str, *separator = "";
	va_list ap;

	va_start(ap, format);
	x = 0;

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					x++;
					continue;
			}
			separator = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(ap);
}
