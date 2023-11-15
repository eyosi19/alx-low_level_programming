#include "main.h"

/**
 * _put_recursion - prints a string in a new line
 *
 *  @s: is a string to print out
 *
 *  return: nothing
 *
 */

void _put_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_put_recursion(s);
	}
	else
	{
		_putchar("\n");
		return;
	}
}
