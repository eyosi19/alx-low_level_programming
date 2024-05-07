#include "main.h"

/**
 * rev_string - a function that rev string
 *
 * @s: the string
 */

void rev_string(char *s)
{
	int i, len;
	char rev;

	len = 0;
	rev = s[0];

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		len--;
		rev = s[i];
		s[i] = s[len];
		s[len] = rev;
	}
}
