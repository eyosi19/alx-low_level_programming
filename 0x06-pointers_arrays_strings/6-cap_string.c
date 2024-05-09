#include "main.h"

/**
 * cap_string - capitalizes all the word
 *
 * @s: the string
 *
 * Return: the cap_string
 */

char *cap_string(char *s)
{
	int i, j;
	char sepr[] = " ,;.!?\"()\t{}\n";

	i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	while (s[i])
	{
		j = 0;

		while (sepr[j])
		{
			if (s[i] == sepr[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
				break;
			}
			j++;
		}
		i++;
	}
	return (s);

}
