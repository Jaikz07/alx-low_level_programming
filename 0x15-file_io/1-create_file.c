#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A string that specifies the name of the file to be opened.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails -1.
 * otherwise 1.
 */
int create_file(const char *filename, char *text_content)
{
	int op, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
		len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(op, text_content, len);

	if (op == -1 || w == -1)
		return (-1);

	close(op);
	return (1);
}
