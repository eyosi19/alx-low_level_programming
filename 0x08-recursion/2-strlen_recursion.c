#include "main.h"

/**
 * _strlen_recursion - Returns the length of the string
 *
 * @s: this is the string
 *
 * Return: The length of the string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

