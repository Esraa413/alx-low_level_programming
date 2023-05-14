#include "main.h"

 /**
 * _strcat - concatenates two strings
 * @dest : input value
 * @src : input value
 * Return: Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int c, x;

	while (dest[c])
	{
		c++;
	}
	for (x = 0; src[x]; x++)
	{
		desr[c++] = src[x];
	}
	return (dest);
}
