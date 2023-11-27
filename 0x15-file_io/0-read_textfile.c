#include "main.h"

/**
 * read_textfile - Reads letters from a file
 *
 * @filename: the file to reade from
 * @letters: the number of bytes to read
 *
 * Return: the number of bytes read or 0 in case of error/fails
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (!filename || letters)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(1, buffer, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}
