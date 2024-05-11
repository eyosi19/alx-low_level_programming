#include "main.h"

/**
 * _memset: fills memory with constant byte
 *
 * @s: pointer
 *
 * @b: the constant byte.
 *
 * @n: the n bytes of the memory
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
