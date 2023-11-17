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

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
