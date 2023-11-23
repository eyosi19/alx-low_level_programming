#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array from min to max
 *
 * @min: the minimum
 *
 * @max: the maximum
 *
 * Return: the order array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *s;

	if (min > max)
	{
		return (NULL);
	}

	s = malloc((max - min + 1) * sizeof(int));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = min; i <= (max - min); i++, j++)
	{
		s[i] = j;
	}
	return (s);
}
