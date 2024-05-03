#include <stdio.h>

/**
 * _islower - a function that tell if its lowercase
 *
 * @c: is the character
 *
 * Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
