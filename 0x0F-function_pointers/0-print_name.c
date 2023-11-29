#include "function_pointers.h"
#include <stdio.h>

/**
 * print_normal - will print normally
 *
 * @name: the argument to print
 *
 * Return: 0;
 */

void print_normal(char *name)
{
	printf("%s", name);
}

/**
 * print_name - will call back the function
 *
 * @name: the argument (the name)
 *
 * @f: the pointer to function
 *
 * Return: 0;
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
