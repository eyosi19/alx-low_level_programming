#include "main.h"

/**
 * _strpbrk - search a string for any of set of bytes
 *
 * @s: the string
 *
 * @accept: the byte that will be compared
 *
 * Return: s if not NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
