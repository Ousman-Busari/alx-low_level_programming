#include "main.h"

int close_error(int fd);

/**
 * error_with_file - prints and exit witht the right code
 * @from_fd: fd of the file to copy from
 * @to_fd: fd of the file to copy to
 * @argv: array of arguments
 * Return: an integer
 */

void error_with_file(int from_fd, int to_fd, char *argv[])
{
	if (from_fd < 0 || from_fd == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file from %s\n",
			argv[1]);
		close(from_fd);
		exit(98);
	}

	if (to_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(from_fd);
		close(to_fd);
		exit(99);
	}
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
	int from_close_error, to_close_error;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	error_with_file(from_fd, 0, argv);
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	error_with_file(0, to_fd, argv);

	while (eof)
	{
		eof = read(from_fd, buffer, 1024);
		error_with_file(read_bytes, 0, argv);
		read_bytes += eof;
		written_bytes = write(to_fd, buffer, eof);
		error_with_file(0, written_bytes, argv);
	}

	from_close_error = close(from_fd);
	to_close_error = close(to_fd);
	if (from_close_error < 0 || to_close_error < 0)
	{
		if (from_close_error < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				from_fd);
		if (to_close_error < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				to_fd);
		exit(100);
	}
	return (0);
}
