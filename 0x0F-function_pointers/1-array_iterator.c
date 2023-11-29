#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - function that iterator to array
 *
 * @array: the actual array
 *
 * @size: size of the array
 *
 * @action: the callback function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
