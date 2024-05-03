#include <stdio.h>

/**
 * print_to_98 - print from n to 98
 *
 * @n: number
 *
 * Return: the number form n 98
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
}
