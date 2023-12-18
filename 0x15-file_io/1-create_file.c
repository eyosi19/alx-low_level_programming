#include "main.h"

/**
 * create_file - create a file
 *
 * @filename: the filename that created
 *
 * @text_content: the text content that needs to be put on the file
 *
 * Return: 1 success, 0 if not
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w_result;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (filename == NULL)
	{
		return (-1);
	}

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		w_result = write(fd, text_content, strlen(text_content));
		if (w_result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}

