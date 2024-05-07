#include "main.h"

/**
 * swap_int - swap the two int
 *
 * @a: the first int
 *
 * @b: the second int
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}


