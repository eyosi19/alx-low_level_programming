#include "main.h"

/**
 * _strstr - located a substring
 *
 * @haystack: the string
 *
 * @needle: the substring
 *
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *needle)
		{
			return (needle);
		}
	}
	return (NULL);
}
