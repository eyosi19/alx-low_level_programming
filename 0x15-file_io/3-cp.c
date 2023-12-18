#include "main.h"

/**
 * error_exit - exiting with error
 *
 * @code: the code
 *
 * @format: the format
 *
 * @arg: the argument
 */

void error_exit(int code, const char *format, const char *arg)
{
	fprintf(stderr, format, arg);
	exit(code);
}

/**
 * close_fd_exit - closes the fd and exit
 *
 * @fd: the fd variable that opens file
 */

void close_fd_exit(int fd)
{
	if (close(fd) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - the main function
 *
 * @argc: the argument count
 *
 * @argv: the arguments
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bR, bW;

	if (argc != 3)
		error_exit(97, "Usage: %s file_from file_to\n", argv[0]);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		close_fd_exit(fd_from);
		error_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}
	while ((bR = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bW = write(fd_to, buffer, bR);
		if (bW == -1)
		{
			close_fd_exit(fd_from);
			close_fd_exit(fd_to);
			error_exit(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}
	if (bR == -1)
	{
		close_fd_exit(fd_from);
		close_fd_exit(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	close_fd_exit(fd_from);
	close_fd_exit(fd_to);
	return (0);
}
