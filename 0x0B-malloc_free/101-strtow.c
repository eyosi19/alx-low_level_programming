#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * strtow - string to words
 *
 * @str: the string that we turned into word
 *
 * Return: the string to word
 */

char **strtow(char *str);
{
	int i;
	int n;
	char *p;
	int j;
	char **s;

	n = strlen(str);

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	s = malloc(n * sizeof(char *));
	if (s == NULL)
	{
		return (NULL);
	}

	p = malloc(n + 1 * sizeof(char));

	if (p == NULL)
	{
		free(s);
		return (NULL);
	}

	strcpy(p, str);

	for (i = 0; i < n; i++)
	{
		s[i] = malloc((strlen(p) + 1) * sizeof(char));
		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(s[j]);
			}
			free(s);
			free(p);
			return (NULL);
		}

		strcpy(s[i], p);
		strcat(s[i], " ");
	}
	free(p);

	return (s);
}


