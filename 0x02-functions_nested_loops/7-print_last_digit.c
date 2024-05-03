#include <stdio.h>

/**
 * print_last_digit - print the last digit
 *
 * @n: the number
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
