#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes with a specific char
 * @size: size of array
 * @c: char to initializes
 * Return: Nothing
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int x;

	n = malloc(sizeof(char) * size);
	if (size == 0 || n == 0)
	{
		return (0);
	}
	for (x = 0; x < size; x++)
	{
		n[x] = c;
	}
	return (n);

}
