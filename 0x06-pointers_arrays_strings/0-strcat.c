#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: the destination
 *
 * @src: the source
 *
 * Return: the pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len;
	char *str = dest[0];
	char *str2 = src[0];

	len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		str[i] = dest[i];
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		str2[i] = src[i];
	}

	for (i = 0; (str[i] + str2[i]) != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = str[i] + str2[i];
	}
	return (*dest);
}
