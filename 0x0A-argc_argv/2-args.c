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
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
