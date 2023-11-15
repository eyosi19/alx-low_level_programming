#include "main.h"

/**
 * _puts_recursion - prints a string in a new line
 *
 *  @s: is a string to print out
 *
 *  return: nothing
 *
 */

void _puts_recursion(char *s)
{
	if (*s == "\0")
	{
		_putchar("\n");
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
