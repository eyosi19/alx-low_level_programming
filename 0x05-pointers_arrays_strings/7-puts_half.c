#include "main.h"

/**
 * puts_half - prints the half of the string
 *
 * @str: the string
 *
 */

void puts_half(char *str)
{
	int i, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	len = len / 2;

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
