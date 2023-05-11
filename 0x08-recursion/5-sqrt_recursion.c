#include "main.h"
#include <stdio.h>


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n : calculate the square
 * Return: Always 0
 */

int square(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square(n, 0));
}

/**
 * square - recurses to find the natural
 * @n : calculate the square
 * @i : square root
 * Return: Always 0
 */

int square(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (square(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
