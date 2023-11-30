#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print a string with separator
 *
 * @separator: the separator
 *
 * @n: the count
 *
 * Return: return nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);

		if (x != NULL)
		{
			printf("%s", x);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}


