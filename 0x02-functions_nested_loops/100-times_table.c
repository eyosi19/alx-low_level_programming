#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print n times table
 *
 * @n: the number
 *
 * Return: the table
 */

void print_times_table(int n)
{
	int y, x, prod;

	prod = 0;

	if (n > 15 || n < 0)
	{
		return (0);
	}

	for (y = 0; y <= n; y++)
	{
		for (x = 0; x <= n; x++)
		{
			prod = y * x;
			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if ((prod < 10) && (x != 0))
			{
				_putchar(' ');
				_putchar((prod % 10) + '0');
			}
			else
				_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
