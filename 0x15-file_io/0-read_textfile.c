#include "main.h"

/**
 * read_textfile - reads a text file and prints it to STDOUT
 *
 * @filename: the file that will be read
 *
 * @letters: the number of letters it should read and print
 *
 * Return: the letters that is read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_char, write_char;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_char = read(fd, buffer, letters);
	close(fd);
	if (read_char == -1)
	{
		free(buffer);
		return (0);
	}
	write_char = write(STDOUT_FILENO, buffer, read_char);
	free(buffer);
	if (read_char != write_char)
		return (0);

	return (write_char);
}
