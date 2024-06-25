#include "main.h"

/**
 * set_bit - sets the value of bit to 1 at a given index
 *
 * @n: pointer to the decimal
 *
 * @index: the index to be changed
 *
 * Return: 1 if it worked or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	n = n ^ (1UL << index);

	return (1);
}
