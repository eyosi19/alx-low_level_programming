#include "main.h"

/**
 * get_endianness - checks the endianess
 *
 * Return: 0 if big 1 if little
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
	{
		return (0);
	}
	else if (*ptr == 0);
	{
		return (1);
	}
}
