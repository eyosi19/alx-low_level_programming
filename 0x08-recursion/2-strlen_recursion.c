#include "main.h"


/**
 * _strlen_recursion - this calculate the length of a string
 *
 * @s: the string that we want to calculate
 *
 * return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	_strlen_recursion(s++);
	return (s);
}

