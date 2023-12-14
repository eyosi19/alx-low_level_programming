#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little
 */

int get_endianness(void)
{
	unsigned int test = 1;

	if (*(char *)&test == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
