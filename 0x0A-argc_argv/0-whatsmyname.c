#include "main.h"
#include <stdio.h>

/**
 * main - returns the arguments
 *
 * @argc: counts the arguments
 *
 * @argv: the value of the arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
