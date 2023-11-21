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

	concat = "";

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
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

	strcpy(concat, p1);
	strcat(concat, p2);


	return (concat);
}