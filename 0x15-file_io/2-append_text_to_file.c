#include "main.h"

/**
 * append_text_to_file - adds text to EOF
 *
 * @filename: file to append to
 * @text_content: data to append to
 *
 * Return: -1 (Error) otherwise 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;
	int n = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[n])
			n++;
	}
	op = open(filename, O_RDWR | O_APPEND);
	wr = write(op, text_content, n);

	if (op < 0 || wr < 0)
		return (-1);

	close(op);

	return (1);
}

