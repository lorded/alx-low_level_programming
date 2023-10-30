#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: On failure to get file -1.
 *         if file is goten 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(file_descriptor, text_content, len);

	if (file_descriptor == -1 || x == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}

