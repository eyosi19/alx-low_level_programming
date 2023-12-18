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
	ssize_t bitR;
	ssize_t bitW;
	ssize_t fd;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	bitR = read(fd, buffer, letters);
	bitW = write(STDOUT_FILENO, buffer, bitR);

	if (fd == -1 || bitR == -1 || bitW == -1 || bitW != bitR)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bitW);
}
