#include "main.h"

/**
 * print_diagsums - print the sum of the two diagonals
 *
 * @a: the array
 *
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		s2 += a[i * size + (size - y - 1)];
	}
	printf("%d, %d\n", s1, s2);

}
