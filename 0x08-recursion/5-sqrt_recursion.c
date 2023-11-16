#include "main.h"

int natural_sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to calculate the square root
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - recurses to find the natural
 * square root of a number
 *
 * @n: number to calculate the square root
 *
 * @x: iterator
 *
 * Return: the resulting square root
 */

int natural_sqrt_recursion(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (natrual_sqrt_recursion(n, x + 1));
}
