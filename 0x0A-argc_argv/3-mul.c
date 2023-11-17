#include <stdio.h>
#include "main.h"


/**
 * _atoi - change char to integer
 *
 * @s: the input
 *
 * Return: the result of the interger
 */

int _atoi(char *s)
{
	int result, sign;

	result = 0;
	sign = 1;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;

	if (*s == '-' || *s == '+')
	{
		sign = (*s++ == '-') ? -1 : 1;
		return (1);
	}

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (sign * result);
	return (0);
}

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

	if (argc < 3 || argc > 3)
	{
		printf("Error.\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	sum = x * y;
	printf("%d\n", sum);
	return (0);
}
