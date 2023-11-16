#include "main.h"

/**
 * wildcmp - Returns 1 if the strings can be considered identical
 *
 * @s1: the first string to compare
 *
 * @s2: the second string to compare
 *
 * Return: 1 if the strings are the same if not 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == '\0' || *s2 == '\0')
	{
		return (0);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	} else
		return (0);
}
