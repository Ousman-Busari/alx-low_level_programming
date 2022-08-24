#include "main.h"
#include <stdio.h>

/**
* create_file - function that creates a file
* @filename: name of the file to be created
* @text_content: content to put into the file
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd_o, fd_w, letter = 0;

	if (filename == NULL)
		return (-1);

	while (*(text_content + letter))
		letter++;
	fd_o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd_o < 0)
		return (-1);
/**	if (text_content == NULL)
		return (1);
*/
	fd_w = write(fd_o, text_content, letter);
	close(fd_o);
	if (fd_w != letter || fd_w < 0)
		return (-1);
	return (1);
}
