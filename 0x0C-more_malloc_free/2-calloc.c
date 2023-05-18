#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer
 * @b: char to copy
 * @n: max bytes
 * Return: Nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	p = malloc(size * nmemb);
	if (p == 0)
	{
		return (0);
	}
	_memset(p, 0, nmemb * size);
	return (p);

}
