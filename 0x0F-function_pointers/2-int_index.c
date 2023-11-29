#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - the integer index
 *
 * @array: the array
 *
 * @size: the size of arrays
 *
 * @cmp: compare
 *
 * Return: i if found -1 if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (0);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
