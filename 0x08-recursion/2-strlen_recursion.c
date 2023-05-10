#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s :  length of a string
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int longe = 0;

	if (*s > '\0')
	{
		longe++;
		longe += _strlen_recursion(s + 1);
	}
	return (longe);
}
