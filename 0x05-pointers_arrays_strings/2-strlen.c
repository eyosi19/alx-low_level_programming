#include "main.h"

/**
 * _strlen - string length
 *
 * @s: the string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int len, i;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
