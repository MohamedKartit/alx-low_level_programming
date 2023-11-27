#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r;
	char *buffer;
	ssize_t counter;

	if (!filename)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters + 1);
	if (!buffer)
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	r = read(o, buffer, letters);
	if (r == -1)
		return (0);
	counter = 0;
	while (buffer[counter])
		_putchar(buffer[counter++]);
	free(buffer);
	return (counter);
}
