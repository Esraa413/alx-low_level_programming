#include "main.h"
#include <stdio.h>
/**
 * string _strlen -a function that returns the length of a string.
 * @s:provides a similar function
 * returns:  leng
 */

int _strlen(char *s)
{
	int leng;

	for (leng = 0; *s != '\0'; s++)
	{
		++leng;
	}
	return (long);
}
