#include "main.h"

/**
 * read_textfile - reads a text file and prints it to STDOUT
 *
 * @filename: the file that will be read
 *
 * @letters: the number of letters it should read and print
 *
 * Return: the letters that is read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char *buffer;
	ssize_t read_chars;

	fptr = fopen(filename, "r");

	if (fptr == NULL)
	{
		return (0);
	}

	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		fclose(fptr);
		return (0);
	}

	read_chars = fread(buffer, 1, letters, fptr);

	fwrite(buffer, 1, read_chars, stdout);

	fclose(fptr);

	return (read_chars);
}
