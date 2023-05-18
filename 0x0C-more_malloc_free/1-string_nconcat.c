#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: space in memory
 * @s2: null terminated
 * @n: number of bytes from s2 to concatenate to s1
 * Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, leng = 0, leng1 = 0;

	while (s1 && s1[leng])
	{
		leng++;
	}
	while (s2 && s2[leng1])
	{
		leng1++;
	}
	if (n < leng1)
	{
		s = malloc(sizeof(char) * (leng + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (leng + leng1 + 1));
	}
	if (!s)
	{
		return (0);
	}
	while (i < leng)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < leng1 && i < (leng + n))
	{
		s[i++] = s2[j++];
	}
	while (n >= leng1 && i < (leng + leng1))
	{
		s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}
