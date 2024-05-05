#include <stdio.h>
#include "main.h"

/**
 * _isupper - return 1 if c is uppercase otherwise 0
 *
 * @c: the character
 *
 * Return: 1 is c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
