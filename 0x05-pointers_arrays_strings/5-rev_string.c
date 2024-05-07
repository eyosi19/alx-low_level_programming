#include "main.h"

/**
 * rev_string - a function that rev string
 *
 * @s: the string
 */

void rev_string(char *s)
{
	int i, len;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = (len - 1); i <= 0; i--;)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
