#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - return the concatinate arguments
 *
 * @ac: argument count
 *
 * @av: array of arguments
 *
 * Return: the concatinate argument
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int i;
	int total;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total = 0;

	for (i = 1; i < ac; i++)
	{
		total += strlen(av[i]);
	}

	concat = malloc(total + 1 * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, "");
	for (i = 1; i < ac; i++)
	{
		strcat(concat, av[i]);
	}

	return (concat);
}


