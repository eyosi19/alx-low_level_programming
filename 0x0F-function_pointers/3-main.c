#include "3-calc.h"

/**
 * main - the main function
 *
 * @argc: the argument count
 *
 * @argv: the array of the arguments
 *
 * Return: the result
 */

int main(int argc, int argv[])
{
	int num1, num2, result;
	char o;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = f(num1, num2);

	printf("%d\n", result);

	return (0);
}
