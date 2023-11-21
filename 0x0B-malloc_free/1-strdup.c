#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns the copy of the string
 *
 * @str: the string
 *
 * Return: the copy string
 */

char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	p = malloc(strlen(str) + 1 * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	strcpy(p, str);

	return (p);
}
