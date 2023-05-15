#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 *str_concat - a function that concatenates two strings
 * @s1: followed by the contents
 * @s2: null terminated
 * Return: Always 0
 */

char *str_concat(char *s1, char *s2)
{
	char *n;
	int x, y;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	x = y = 0;
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	n = malloc(sizeof(char) * (x + y + 1));
	if (n == 0)
	{
		return (0);
	}
	x = y = 0;
	while (s1[x] != '\0')
	{
		n[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		n[x] = s2[y];
		x++, y++;
	}
	n[x] = '\0';
	return (n);

}
