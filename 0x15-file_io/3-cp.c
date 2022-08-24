#include "main.h"

/**
 * close_safe - a fucntion the shows if a file is close safely
 * @fd: the file description of the file to close
 *
 * Return: an integer
 */

int close_safe(int fd)
{
	int ret;

	ret = close(fd);
	if (ret < 0)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
		exit(100);
	}
	return (ret);
}

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
	int to_fd, from_fd, read_bytes = 0, written_bytes, eof = 1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n",
			argv[1]);
		exit(98);
	}
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_safe(from_fd);
		exit(99);
	}

	while (eof)
	{
		eof = read(from_fd, buffer, 1024);
		if (eof < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n",
				argv[1]);
			close_safe(from_fd);
			close_safe(to_fd);
			exit(98);
		}
		if (eof == 0)
			break;
		read_bytes += eof;
		written_bytes = write(to_fd, buffer, eof);
		if (written_bytes < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			close_safe(from_fd);
			close_safe(to_fd);
			exit(99);
		}
	}

	close_safe(from_fd);
	close_safe(to_fd);
	return (0);
}
