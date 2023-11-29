#include "function_pointers.h"
#include <stdio.h>

void print_normal(char *name)
{
	printf("%s\n", name);
}
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
