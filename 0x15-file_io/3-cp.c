#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int close_error(int fd);

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments passed into the program fromm the command line
 * @argv: array of arguements from the command line
 *
 * Return: an integer
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int to_fd, from_fd, read_bytes, written_bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	read_bytes = read(from_fd, buffer, 1024);
	if (from_fd < 0 || read_bytes < 0)
	{
   	       	dprintf(STDERR_FILENO, "Error: Can't read file from %s\n",
			argv[1]);
		close_error(from_fd);
		exit(98);
	}

	to_fd = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	written_bytes = write(to_fd, buffer, read_bytes);

	if (to_fd < 0 || written_bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_error(from_fd);
		close_error(to_fd);
		exit(99);
	}
	close_error(from_fd);
	close_error(to_fd);
	return (0);
}

/**
 * close_error - a function tha prints an error message if a file
 * can't be closed
 * @fd: fildes of the file to be closed
 *
 * Return: 0 if successfully closed, -1 if failed
 */

int close_error(int fd)
{
	int state;

	state = close(fd);
	if (state < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (state);
}
