#include "main.h"

/**
 * _isdigit - tells if c is digit
 *
 * @c: the char
 *
 * Return: 1 if its digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
