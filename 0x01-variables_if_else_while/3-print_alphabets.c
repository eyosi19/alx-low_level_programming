#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */

int main(void)
{
	char c;
	char b;

	c = 'a';
	b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
