#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - that creates a new file
 * @filename: the text file to creat
 * @text_content: a string to write to the file
 *
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int new_file, w;
	int len = 0;

	if (filename == 0)
		return (-1);
	if (text_content != 0)
	{
		while (text_content[len])
			len++;
	}
	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	w = write(new_file, text_content, len);

	if (new_file == -1 || w == -1)
		return (-1);
	close(new_file);

	return (1);
}
