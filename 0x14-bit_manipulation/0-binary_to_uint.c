#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 *
 * @b: the 0 and 1's
 *
 * Return: the decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
	{
		return (0);
	}
	result = 0;

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		result = result * 2;

		result += (*b - '0');
		b++;
	}

	return (result);
}
