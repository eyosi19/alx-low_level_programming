#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */

int main(void)
{
	char c;
	int i;

	c = 'a';
	i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
