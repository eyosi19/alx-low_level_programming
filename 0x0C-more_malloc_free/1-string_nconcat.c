#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - return the concatinated values
 *
 * @s1: the first string
 *
 * @s2: the second string
 *
 * @n: the n value
 *
 * Return: the concat strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n >= l2)
	{
		n = l2;
	}

	result = malloc(l1 + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);

	strncat(result, s2, n);

	return (result);
}

