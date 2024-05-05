#include "main.h"

/**
 * _isupper - return 1 if upper 0 otherwisr
 *
 * @c: the char
 *
 * Return: 1 if c = upper if not 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
