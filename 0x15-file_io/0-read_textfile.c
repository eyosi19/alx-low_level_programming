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
	int i, ch;
	FILE *fptr;

	fptr = fopen(filename, "r");

	if (fptr == NULL && filename == NULL)
	{
		return (0);
	}

	for (i = 0; i <= letters; i++)
	{
		ch = fgetc(fptr);
	}

	return (ch);
}
