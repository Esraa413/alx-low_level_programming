#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x = 1;
	int x;
	int sum = 0;

	while (x < argc)
	{
		if ((argv[x]))

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
