#include "main.h"

/**
 * reverse_array - reverse an array
 *
 * @a: the array
 *
 * @n: the number
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (int i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
