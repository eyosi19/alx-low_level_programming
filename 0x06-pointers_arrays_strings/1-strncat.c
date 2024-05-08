#include "main.h"

/**
 * _strncat - concatenate from the first to the second 'n'
 *
 * @dest: the destination
 *
 * @src: the source
 *
 * @m: the n bit that will concat
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
