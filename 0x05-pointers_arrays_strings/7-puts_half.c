#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: array string type
 * discraption: is odd the function should print the last length string - 1 / 2
 */

void puts_half(char *str)
{
	int l, i, longi;

	longi = 0;

	for (l = 0; str[l] != '\0'; l++)
		longi++;

	i = (longi / 2);

	if ((longi % 2) == 1)
		i = ((longi + 1) / 2);

	for (l = i; str[l] != '\0'; l++)
		_putchar(str[l]);

	_putchar('\n');
}
