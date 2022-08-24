#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of the file to append the text to
 * @text_content: strings of text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);
	while (*(text_content + len))
		len++;
	fdo = open(filename, O_RDWR | O_APPEND);
	if (fdo < 0)
		return (-1);
	fdw = write(fdo, text_content, len);
	close(fdo);
	if (fdw < 0)
		return (-1);
	return (1);
}
