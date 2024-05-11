#include "main.h"

/**
 * _memset - fills memory with constant byte n bytes with constant b
 *
 * @s: the pointer that will be filled
 *
 * @b: the constant byte.
 *
 * @n: the n bytes of the memory
 *
 * Return: pointer s
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
