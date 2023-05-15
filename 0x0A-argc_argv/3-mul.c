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
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
