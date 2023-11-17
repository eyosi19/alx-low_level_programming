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
	if (argc != 3)
	{
		printf("Error.\n");
		return (1);
	}

	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	int sum = x * y;

	printf("%i\n", sum);
}


