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
	int len, c, i;

	len = sizeof(*s);

	for (i = 0; i < len; i++)
	{
		c = 0;

		if (*s == '\0')
		{
			return (0);
		}
		c++;
	}
	return (0);
}
