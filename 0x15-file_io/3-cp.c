#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments supplied
 * @argv: array of pointers
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int file_from = 0;
	int file_to = 0;
	ssize_t byt;
	char buf[READ_BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: copy file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]), exit(98);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_from == -1)
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]), exit(99);
	while ((byt = read(file_from, buf, READ_BUF_SIZE)) > 0)
		if (write(file_to, buf, byt) != byt)
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]), exit(99);
	if (byt == -1)
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]), exit(98);
	file_from = close(file_from);
	file_to = close(file_to);
	if (file_from)
		dprintf(STDERR_FILENO,
				"ERROR: Can't close file_from %d\n", file_from), exit(100);
	if (file_to)
		dprintf(STDERR_FILENO,
				"ERROR: Can't close file_from %d\n", file_from), exit(100);

	return (1);
}
