#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the name of the file
 *
 * @text_content: the text content
 *
 * Return: 1;
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND);

	if (fd == -1)
		return (-1);

	write(fd, text_content, strlen(text_content));

	return (1);
}
