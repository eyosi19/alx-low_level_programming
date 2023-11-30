#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print number with a separator
 *
 * @separator: the separator
 *
 * @n: the count
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;

	va_list(args);

	va_start(args, n);

	if (separator == NULL)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
