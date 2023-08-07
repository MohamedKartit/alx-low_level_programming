#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: a pointer to the name of the file to create
 * @text_content: the text add to the end of the file
 *
 * Return: 1 Success, -1 Fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
