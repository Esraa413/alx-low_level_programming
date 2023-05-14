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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
