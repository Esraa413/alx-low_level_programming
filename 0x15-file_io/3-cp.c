#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);

/**
 * create_buffer - Allocates 1024 bytes
 * @file: The name of the file buffer
 * Return: Always 0
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == 0)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments supplied
 * @argv: array of pointers
 *
 * Return: Always 0.
 *
 * Description: If the argument count - exit code 97.
 * If file_from does not exist or cannot - exit code 98.
 * If file_to cannot be created -  exit code 99.
 * If file_to or file_from cannot - exit code 100.
 */

int main(int argc, char *argv[])
{
	int fd_from = 0;
	int fd_to = 0;
	int end1, end2;
	ssize_t byt;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]), exit(98);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((byt = read(fd_from, buffer, 1024)) > 0)
	{
		if (fd_to < 0 || (write(fd_to, buffer, byt) != byt))
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (byt == -1)
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]), exit(98);
	free(buffer);
	end1 = close(fd_from);
	if (end1 == -1)
		dprintf(STDERR_FILENO,
				"ERROR: Can't close fd %d\n", fd_from), exit(100);
	end2 = close(fd_to);
	if (end2 == -1)
		dprintf(STDERR_FILENO,
				"ERROR: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
