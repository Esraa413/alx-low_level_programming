#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: returns a pointer to a new string
 * Return: Always 0
 */

char *_strdup(char *str)
{
	char *a;
	int x, n = 0;

	if (str == 0)
	{
		return (0);
	}
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	a = malloc(sizeof(char) * (x + 1));
	if (a == 0)
	{
		return (0);
	}
	for (n = 0; str[n]; n++)
		a[n] = str[n];
	return (a);
}
