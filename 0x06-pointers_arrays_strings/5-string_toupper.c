#include "main.h"

/**
 * string_toupper - change the string to upper
 *
 * Return: the string with upper case
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
}

