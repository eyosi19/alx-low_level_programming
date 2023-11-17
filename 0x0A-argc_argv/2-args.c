#include "main.h"
#include <stdio.h>

/**
 * main - returns the all arguments
 *
 * @argc: number of arguments
 *
 * @argv: arrays of arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	for (int i = 0; argv[i] != NULL; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
