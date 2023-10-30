#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and prints it print to standard
 *                output.
 * @filename: name of the text file to be read
 * @letters: the no of letters to be read
 * Return:  actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t x;
	ssize_t o;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	o = read(file_descriptor, buffer, letters);
	x = write(STDOUT_FILENO, buffer, o);

	free(buffer);
	close(file_descriptor);
	return (x);
}

