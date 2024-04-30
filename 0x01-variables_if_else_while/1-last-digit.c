#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - returns 0
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int result = n % 10;

	if (result > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, result);
	}
	else if (result == 0)
	{
		printf("Last digit of %d is %d and is 0", n, result);
	}
	else if (result < 6 && result != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, result);
	}

	return (0);
}
