#include <stdio.h>

/**
 * print_alphabet - print the alphabets from a - z lowercase
 *
 * Return: from a - z
 */

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
