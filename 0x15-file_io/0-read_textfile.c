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
	ssize_t bR, bW, fd;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	bR = read(fd, buffer, letters);
	bW = write(STDOUT_FILENO, buffer, bR);

	if (fd == -1 || bR == -1 || bW == -1 || bW != bR)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bW);
}
