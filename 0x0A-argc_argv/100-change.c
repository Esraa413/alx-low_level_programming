#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * main - print the new name of the program
 * @argc: int number of arguments
 * @argv: list array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n, x, sum;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	sum = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && n >= 0; x++)
	{
		while (n >= coin[x])
		{
			sum++;
			n -= coin[x];
		}
	}
	printf("%d\n", sum);
	return (0);
}
