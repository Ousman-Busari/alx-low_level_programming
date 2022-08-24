#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file to read from
 * @letter: number of bytes to read from the file
 *
 * Return: size of the written bytes
 */

ssize_t read_textfile(const char *filename, size_t letter)
{
	int fd_o, fd_r, fd_w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letter);
	if (buff == NULL)
		return (0);

	fd_o = open(filename, O_RDONLY);
	fd_r = read(fd_o, buff, letter);
	fd_w = write(STDOUT_FILENO, buff, fd_r);
	if (fd_o < 0 || fd_r < 0 || fd_w != fd_r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd_o);
	return ((ssize_t)fd_w);
}
