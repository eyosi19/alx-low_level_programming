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
	if (filename == NULL)
	{
		return (0);
	}
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	char *buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	ssize_t bR = read(fd, buffer, letters);

	if (bR == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	ssize_t bW = write(STDOUT_FILENO, buffer, bR);

	if (bW == -1 || bW != bR)
	{
		free(buffer);
		close(fd);
		return (bW);
	}

	free(buffer);
	close(fd);
	return (bW);
}
