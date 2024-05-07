#include "main.h"

/**
 * _puts - print string
 *
 * @str: the string
 */

void _puts(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
