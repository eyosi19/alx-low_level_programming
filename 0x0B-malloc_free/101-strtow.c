#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - string to words
 *
 * @str: the string that we turned into word
 *
 * Return: the string to word
 */

char **strtow(char *str)
{
	int i, n, j, start, length, wordCount;
	char **s;

	n = strlen(str), wordCount = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	s = malloc(n * sizeof(char *));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		while (i < n && str[i] == ' ')
			i++;

		if (i < n)
		{
			start = i;
			while (i < n && str[i] != ' ')
				i++;

			length = i - start;
			s[wordCount] = malloc((length + 1) * size(char));
			if (s[wordCount] == NULL)
			{
				for (j = 0; j < wordCount; j++)
				{
					free(s[j]);
				}
				free(s);
				return (NULL);
			}
			strncpy(s[wordCount], str + start, length);
			s[wordCount++][length] = '\0';
		}
	}
	s[wordCount] = NULL;
	return (s);
}


