#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the decimal
 *
 */

void print_binary(unsigned long int n)
{
	int i, len = sizeof(unsigned long int) * 8;

	for (i = len - 1; i >= 0; i--)
	{
		if (n & (1UL << i))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
