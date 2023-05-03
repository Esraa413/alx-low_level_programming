#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @n: elements paraneter input
 * @a: string paraneter onput
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n - 1))
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n");
}
