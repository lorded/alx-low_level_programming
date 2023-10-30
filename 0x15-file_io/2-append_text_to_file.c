#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to append to the file.
 *
 * Return: -1 on failure also when file name is null
 *         1 is viceversa
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int v, u, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	v = open(filename, O_WRONLY | O_APPEND);
	u = write(v, text_content, len);

	if (v == -1 || u == -1)
		return (-1);

	close(v);

	return (1);
}

