#include <stdio.h>
#include "main.h"


int atoi(char *s);

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

	sum = x * y;

	printf("%i\n", sum);
}

/**
 * atoi - change char to integer
 *
 * @s: the input
 *
 * Return: the result of the interger
 */

int atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;

	if (*s == '-' || *s == '+')
	{
		sign = (*s++ == '-') ? -1 : 1;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (sign * result);
}
