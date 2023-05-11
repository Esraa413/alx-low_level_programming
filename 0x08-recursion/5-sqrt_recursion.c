#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n : calculate the square
 * Return: Always 0
 */

int natural_square(int n, int x);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_square(n, 0));
}

/**
 * natural_square - recurses to find the natural
 * @n : calculate the square
 * @x : iterator
 * Return: Always 0
 */

int natural_square(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
		return (natural_square(n, x + 1));
	}
}
