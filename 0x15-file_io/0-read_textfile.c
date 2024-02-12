#include "main.h"

/**
 * read_textfile - reads a textfile and prints the contents to POSIX STDOT
 *
 * @filename: name of the file to read
 * @letters: number of characters to print to STDOUT
 *
 * Return: number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buff;

	if (!filename || !letters)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(op);

	return (wr);
}

