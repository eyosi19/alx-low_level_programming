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
	if (s != '0')
	{
		return (sizeof(char) / sizeof(*s));
	}
}
