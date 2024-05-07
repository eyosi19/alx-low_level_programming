#include "main.h"

/**
 * _strcpy - copy string form src to dest
 *
 * @dest: the destination
 *
 * @src: the source
 *
 * Return: the copy
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;
	char str[0];

	len = 0;


	for (i = 0; src[0] != '\0'; i++)
		len++;

	for (i = 0; i < len; i++)
	{
		src[i] = str[i];
		str[i] = dest[i];
	}
	return (*dest);
