#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 *
 * @n: the decimal number
 *
 * @index: is the index you want to get
 *
 * Return: the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if (n & (1UL << index))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
