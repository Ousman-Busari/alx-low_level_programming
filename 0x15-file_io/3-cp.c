#include "main.h"

int close_safe(int fd);
void read_n_write(int from_fd, int to_fd);


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
	int to_fd, from_fd, read_bytes = 0, written_bytes;
	int from_close, to_close;

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

	read_n_write(from_fd, to_fd);

	from_close = close_safe(from_fd);
	if (from_close < 0)
	{
		close_safe(from_fd);
		exit(100);
	}
	to_close = close_safe(to_fd);
	if (to_close < 0)
		exit(100);
	return (0);
}

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
 * read_n_write - read from one file and write into the other
 * @from_fd: desscriptor of the file to read from
 * @to_fd: descriptor of the file to write to
 *
 * Return: nothing
 */

void read_n_write(int from_fd, int to_fd)
{
	int eof = 1;

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
}
