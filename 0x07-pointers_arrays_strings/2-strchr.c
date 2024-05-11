#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string
 *
 * @c: the character
 *
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	for (; *s >= '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
