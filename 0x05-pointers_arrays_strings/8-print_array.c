#include <stdio.h>
#include "main.h"

/**
 * print_array - print the n number of arrays
 *
 * @a: the array
 *
 * @n: the n number
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
}
