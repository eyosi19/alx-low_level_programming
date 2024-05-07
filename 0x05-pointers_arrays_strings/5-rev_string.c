#include "main.h"

/**
 * rev_string - a function that rev string
 *
 * @s: the string
 */

void rev_string(char *s)
{
	int i, len, j;
	char *rev;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (j = (len - 1); j >= 0; j--)
	{
		rev = s[i];
		s[j] = s[i];
		s[i] = rev;
	}
}
