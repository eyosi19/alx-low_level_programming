#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - returns the concatinated strings of two strings
 *
 * @s1: the first string to concatinate
 *
 * @s2: the second string to concatinate
 *
 * Return: return the result of the s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	char *p1;
	char *p2;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	concat = malloc(strlen(p1) + strlen(p2) + 1 * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
