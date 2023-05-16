#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments
 * @ac: int input
 * @av: double pointer array
 * Return: Nothin
 */

char *argstostr(int ac, char **av)
{
	int l, n, x = 0;
	int y = 0;
	char *s;

	if (ac == 0 || av == 0)
	{
		return (0);
	}
	for (l = 0; l < ac; l++)
	{
		for (n = 0; av[l][n]; n++)
			y++;
	}
	y += ac;
	s = malloc(sizeof(char) * y + 1);
	if (s == 0)
	{
		return (0);
	}
	for (l = 0; l < ac; l++)
	{
		for (n = 0; av[l][n]; n++)
		{
			s[x] = av[l][n];
			x++;
		}
		if (s[x] == '\0')
		{
			s[x++] = '\n';
		}
	}
	return (s);
}
