#include "main.h"
/**
 * checks for lowercase character
 * @c: is the char to be checked
 * Returns 0 otherwise
 */

int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}
