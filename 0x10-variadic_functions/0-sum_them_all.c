#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all the n's
 *
 * @n: the first argument
 *
 * Return: (s)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x;
	int s = 0;

	va_list args;
	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		s += x;
	}
	return (s);
}

