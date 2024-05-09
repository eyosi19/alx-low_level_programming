#include "main.c"
#include <ctype.h>
/**
 * cap_string - capitalizes all the word
 *
 * @str: the string
 *
 * Return: the cap_string
 */

char *cap_string(char *str)
{
	int i, cap;

	cap = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]) && cap)
		{
			str[i] = toupper(str[i]);
			cap = 0;
		}
	}
	return (str);
}
