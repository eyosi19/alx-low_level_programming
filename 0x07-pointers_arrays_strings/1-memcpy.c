#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: the destination
 *
 * @src: the source
 *
 * @n: the copies
 *
 * Return: the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
