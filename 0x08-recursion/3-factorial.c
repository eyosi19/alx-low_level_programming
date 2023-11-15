#include "main.h"

/**
 * factorial - Returns the factorial of the givern number
 *
 * @n: the integer
 *
 * Return: the factorial of the givern number
 */


int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
