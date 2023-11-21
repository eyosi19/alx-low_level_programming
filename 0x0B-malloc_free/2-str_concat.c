#include "main.h"
#include <stdlib.h>
#include <stding.h>

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

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	p1 = malloc(strlen(s1) + 1 * sizeof(char));

	if (p1 == NULL)
	{
		return (NULL);
	}

	p2 = malloc(strlen(s2) + 1 * sizeof(char));

	if (p2 == NULL)
	{
		return (NULL);
	}

	strcpy(p1, s1);
	strcpy(p2, s2);

	concat = malloc(strlen(p1) + strlen(p2) + 1 * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, p1);
	strcpy(concat, p2);


	return (concat);
}
