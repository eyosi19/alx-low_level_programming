#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - allocate memory
 *
 * @b: this the integer
 *
 * Return: 98
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
