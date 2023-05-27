#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @f: pointers to function
 * @name: name of the person
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
