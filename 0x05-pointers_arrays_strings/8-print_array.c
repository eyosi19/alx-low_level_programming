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

	if (*a <= 0)
		printf("\n");

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
		printf("%d", a[(n-1)]);
	}
}
