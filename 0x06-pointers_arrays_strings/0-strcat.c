#include "main.h"
 /**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (*(dest + x) != '\0')
	{
		x++;
	}

	while (y >= 0)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
			break;
		x++;
		y++;
	}
	return (dest);
}
