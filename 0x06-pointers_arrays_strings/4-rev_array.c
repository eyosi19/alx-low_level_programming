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
	int left, right, temp;

	left = 0;
	right = n - 1;

	while (left < right)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;

		left++;
		right++;
	}
}
