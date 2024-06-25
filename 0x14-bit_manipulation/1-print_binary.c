#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the decimal
 *
 */

void print_binary(unsigned long int n)
{
	int i, len = sizeof(unsigned long int) * 8, found = 0;

	for (i = len - 1; i >= 0; i--)
	{
		if (n & (1UL << i))
		{
			found = 1;
			printf("1");
		}
		else if (found)
		{
			printf("0");
		}
	}

	if (!found)
		printf("0");
}
