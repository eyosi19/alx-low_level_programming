#include "main.h"

/**
 * _strncpy - copies string n character
 *
 * @dest: the destination
 *
 * @src: the source
 *
 * @n: the character
 *
 * Return: the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
