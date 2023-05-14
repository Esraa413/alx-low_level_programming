#include <stdio.h>
#include "main.h"

/**
 * main - print the new name of the program
 * @argc: int number of arguments
 * @argv: list array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum, x1, x2;
	
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x1 = _atoi(argv[1]);
	x2 = _atoi(argv[2]);
	sum = x1 * x2;

	printf("%d\n", sum);

	return (0);
}
