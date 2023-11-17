#include "main.h"
#include <stdio.h>

/**
 * main - returns the all arguments
 *
 * @argc: number of arguments
 *
 * @argv: arrays of arguments
 *
 * return: 0
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
}
