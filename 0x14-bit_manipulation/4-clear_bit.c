#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 *
 * @n: the pointer to the decimal
 *
 * @index: the given index
 *
 * Return: 1 if it worked -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned int long) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	*n ^= mask;

	return (1);
}
