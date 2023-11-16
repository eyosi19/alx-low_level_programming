#include "main.h"

int is_divisible(int n, int i);

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * @n: the number to check
 *
 * Return: if its a prime number
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (!is_divisible(n, 2));
}

/**
 * is_divisible - Returns if n is divisible by any number from 2 to sqrt(n)
 *
 * @n: the number to check if divisible
 *
 * @i: irative
 *
 * Return: the divisible number
 */


int is_divisible(int n, int i)
{
	if (i * i > n)
	{
		return (0);

	}
	if (n % i == 0)
	{
		return (1);

	}
	return (is_divisible(n, i + 2));
}
