#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: the text file to read
 * @letters: the numper of bytes to read
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(sizeof(char) * letters);
	ssize_t new_file;
	ssize_t w_t;


	new_file = open(filename, O_RDONLY);
	if (new_file == -1)
		return (0);
	w_t = read(new_file, buf, letters);
	w_t = write(STDOUT_FILENO, buf, w_t);

	close(new_file);
	return (w_t);
}
