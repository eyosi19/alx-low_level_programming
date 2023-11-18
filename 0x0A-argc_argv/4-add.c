#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - returns the addition of to arg
 *
 * @argc: number of arg
 *
 * @argv: arrays of arg
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum, currentNumber;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		currentNumber = atoi(argv[i]);

		if (currentNumber <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += currentNumber;
	}
	printf("%d\n", sum);
	return (0);
}

