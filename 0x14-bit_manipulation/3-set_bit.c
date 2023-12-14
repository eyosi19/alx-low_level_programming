#include "main.h"

/**
 * set_bit - sets the value of the bit in the given index
 *
 * @n: pointer to the number
 *
 * @index: the index of bit
 *
 * Return: 1 success, -1 error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = *n | (1UL << index);

	return (1);
}
