#include <stdio.h>
#include "main.h"

/**
 *  get_endianness -  checks the endianness and return the end
 *  Return: 0
 */

int get_endianness(void)
{
	unsigned int end = 1;
	char *c;

	c = (char *) &end;

	return (*c);
}
