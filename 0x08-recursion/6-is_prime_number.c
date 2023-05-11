#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n : if the input integer is a prime number
 * @x : int
 * Return: Always 0
 */

int prime(int n, int x);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - calculates if a number is prime recursively
 * @n : if the input integer is a prime number
 * @x : int
 * Return: Always 0
 */

int prime(int n, int x)
{
	if (x >= n && n > 1)
	{
		return (1);
	}
	else if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (prime(n, x = 1));
}
