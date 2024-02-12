#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: name of the file to be created
 * @text_content: the string to be written in the file
 *
 * Return: -1 (Error/failure) otherwise 1
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr;
	int l = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[l])
			l++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, l);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}


