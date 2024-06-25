#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 *
 * @b: where b is pointing to 0 and 1 chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (*b == 0)
	{
		printf("0");
	}

	if (*b == '0' || *b == '1')
	{
		while (*b)
		{
			if (*b == '1')
			{
				result = result << 1;
				result += 1;
			}
			if (*b == '0')
			{
				result = result << 1;
			}
			b++;
		}
	}
	else
	{
		printf("0");
	}
	return (result);
}
