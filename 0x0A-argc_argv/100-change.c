#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns the coin
 *
 * @argc: number of arg
 *
 * @argv: arrays of arg
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, coins[], numCoins, count, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins[] = {25, 10, 5, 2, 1};
	numCoins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	for (i = 0; i < numCoins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	
	printf("%d\n", count);
	return (0);
}
