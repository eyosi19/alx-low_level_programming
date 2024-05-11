#include "main.h"

/**
 * _strspn - that gets length of a prefix substring
 *
 * @s: the string
 *
 * @accept: the prefix
 *
 * Return: s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (count);
		}
	}
	return (count);
}
