#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc
 *
 * @nmemb: the array
 *
 * @size: the size
 *
 * Return: hte array of a given size
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = malloc(nmemb * size * sizeof(int));

	if (s == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < (size * nmemb); i++)
	{
		s[i] = '\0';
	}
	return (s);
}

