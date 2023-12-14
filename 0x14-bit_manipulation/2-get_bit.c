#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 *
 * @n: the number
 *
 * @index: the index
 *
 * Return: the value of the bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	unsigned long int shifted = n >> index;

	int result = shifted & 1;

	return (result);
}
