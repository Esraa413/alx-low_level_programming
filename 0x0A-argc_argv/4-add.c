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
	int x = 1;
	int y;
	int sum = 0;

	while (x < argc)
	{
		if (argv[x])
		{
			y = atoi(argv[x]);
			sum += y;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		x++;
	}

	printf("%d\n", sum);

	return (0);
}
