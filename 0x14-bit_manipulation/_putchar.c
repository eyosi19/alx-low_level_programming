#include "main.h"

/**
 * _putchar - prints char
 *
 * @c: the char to print
 *
 * Return: the char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
