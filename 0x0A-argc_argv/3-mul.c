#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - returns the result of two arguments multiply
 *
 * @argc: number of arguments
 *
 * @argv: arrays of arugments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, sum;

	if (argc != 3)
	{
		printf("Error.\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	int sum = x * y;

	printf("%i\n", sum);
}


