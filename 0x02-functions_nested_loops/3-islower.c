#include <stdio.h>

/**
 * _islower - a function that tell if its lowercase
 *
 * @c: is the character
 *
 * Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int c)
{
	char o;

	for (o = 46; 0 <= 57; o++)
	{
		if (c == o)
		{
			return (0);
		}
		else
		{
			return (1);
		}
		o++;
	}
}
