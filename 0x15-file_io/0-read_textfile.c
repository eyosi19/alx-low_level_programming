#include "main.h"


/**
 * read_textfile - read the given letter from a file
 *
 * @filename: the filename
 *
 * @letters: the letters that will be read and print
 *
 * Return: the read one
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t br;

	if (filename == NULL)
	{
		return (0);
	}

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}

	buffer = (char *)malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	br = fread(buffer, sizeof(char), letters, file);

	if (br == 0 && ferror(fp))
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	free(buffer);
	fclose(fp);

	return (br);
}
