#include "main.h"

/**
 * read_textfile - read the text from the file
 *
 * @filename: the filename
 *
 * @letters: the letter of the mode
 *
 * Return: to the stdout
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t br, bw, fd;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	br = read(fd, buffer, letters);
	bw = write(STDOUT_FILENO, buffer, br);

	if (fd == -1 || br == -1 || bw == -1 || bw != br)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bw);
}
