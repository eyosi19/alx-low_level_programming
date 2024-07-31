#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: the name of the file to create
 *
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1;
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		written = write(fd, text_content, len);
		if (written == -1 || written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
