#include "main.h"

/**
 * append_text_to_file - append to file
 *
 * @filename: the filename
 *
 * @text_content: the text to append
 *
 * Return: 1 success, -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	ssize_t w = write(fd, text_content, strlen(text_content));

	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
