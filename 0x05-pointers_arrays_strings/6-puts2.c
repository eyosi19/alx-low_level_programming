#include "main.h"

/**
 * puts2 - prints every other character of a string.
 *
 * @str: the string
 */

void puts2(char *str)
{
	int i, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	_putchar(str[0]);

	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(str[i + 1]);
	}
	_putchar('\n');
}
