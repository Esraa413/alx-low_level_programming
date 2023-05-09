#include "main.h"
#include <stdio.h>

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */


char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *l = needle;

		while (i == *l && *l != '\0')
		{
			i++;
			l++;
		}
		if (*l == '\0')
			return (haystack);
	}
	return (0);
}
