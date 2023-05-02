#include "main.h"
#include <stdio.h>

/**
 * __strlen -a function that returns the length of a string.
 * @s:provides a similar function
 * return: length of a string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; ++s)
		++a;

	return (a);
}
