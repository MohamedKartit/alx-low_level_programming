#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it to the POSIX stdout
 *
 * @filename: pointer to the name of the file
 * @letters: the number of letter to be printed
 *
 * Return: the number of bytes the function can read and print
 * or 0 in case of fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1 || w == -1 || r == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(o);

	return (w);
}
