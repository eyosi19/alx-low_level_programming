#include "main.h"

/**
 * _print_rev_recursion - this will revrse the string
 *
 * @s: this is the string
 *
 * return: nothing
 */


void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
