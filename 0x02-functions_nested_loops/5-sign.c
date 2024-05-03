#include <stdio.h>
#include "main.h"

/** print_sign - print the sign of a number
 *
 * @n: the number
 *
 * Return: the sign
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (0);
	}
}
