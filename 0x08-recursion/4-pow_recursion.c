#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: the first integer
 *
 * @y: the second integer
 *
 * Return: the value of x raised to the power of y
 */


int _pow_recursion(int x, int y)
{
	if (n < 0)
	{
		return (-1);

	} else if (n == 0)
	{
		return (1);

	} else if (y % 2 == 0)
	{
		return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	} else
		return (x * _pow_recursion(x, y - 1));
}

