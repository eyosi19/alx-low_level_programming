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
	void *s;

	s = malloc(b * sizeof(int));

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
