#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocate a memory
 *
 * @ptr: the previous pointer
 *
 * @old_size: the old size
 *
 * @new_size: the new size
 *
 * Return: the new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
	{
		return (NULL);
	}

	memcpy(nptr, ptr, (old_size < new_size) ? old_size : new_size);

	free(ptr);

	return (nptr);
}
