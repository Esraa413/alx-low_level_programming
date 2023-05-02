#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */


int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; ++s)
		++a;

	return (a);
}
