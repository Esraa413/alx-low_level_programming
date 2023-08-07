#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - that appends text at the end of a file
 * @filename: the text file to append
 * @text_content: the string and end the file
 *
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
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

	new_file = open(filename, O_WRONLY | O_APPEND);
	w = write(new_file, text_content, len);

	if (new_file == -1 || w == -1)
		return (-1);
	close(new_file);

	return (1);
}
