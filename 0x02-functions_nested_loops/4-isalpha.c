#include <stdio.h>

/**
 * _isalpha - return 1 if c is a letter, upper or lower case.
 *
 * @c: the character
 *
 * Return: 1 if it is letter 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z'));
}
