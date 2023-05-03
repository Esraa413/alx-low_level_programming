#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int l = 0;
	int i;
	char tm = s[0];

	while (s[l] != '\0')
		l++;
	for (i = 0; i < l; i++)
	{
		l--;
		tm = s[i];
		s[i] = s[l];
		s[l] = tm;
	}
}
