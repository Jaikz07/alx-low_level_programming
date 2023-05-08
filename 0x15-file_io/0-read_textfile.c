#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: a - actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t op;
	ssize_t a;
	ssize_t r;

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(op, buf, letters);
	a = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(op);
	return (a);
}
