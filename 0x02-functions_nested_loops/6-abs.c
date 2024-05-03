#include <stdio.h>

/**
 * _abs - the absolute value an integer
 *
 * @n: the number
 *
 * Return: the absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
