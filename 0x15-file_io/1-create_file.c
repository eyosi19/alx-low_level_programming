#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: the name of the file to create
 *
 * @text_content: is a NULL terminated string to write to the file
 */

int create_file(const cahr *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT, 0600);

	if (fd == -1)
	{
		return (0);
	}

	write(fd, text_content, 1);

	close(fd);

}
