#include <stdio.h>
#include "main.h"

/**
 * _atoi - returns string to integer
 *
 * @s: the string
 *
 * Return: the result
 */


int _atoi(char *s)
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

/**
 * _isdigit - check if its digit
 *
 * @c: char
 *
 * Return: if its digit or not
 */

int _isdigit(char c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

/**
 * main - returns the addition of arguments
 *
 * @argc: number of arguments
 *
 * @argv: arrays of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += _atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

