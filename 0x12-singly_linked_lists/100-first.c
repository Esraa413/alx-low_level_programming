#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * constructor -  sentence before the main
 * Return: Always 0
 */

void first (void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n")
}
