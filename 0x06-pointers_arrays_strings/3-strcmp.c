#include "main.h"

/**
 * _strcmp - string compare
 *
 * @s1: string1
 *
 * @s2: string2
 *
 * Return: 15 if greater -15 if lesser; equal 0
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, len1, len2;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0l s2[j] != '\0'; j++)
		len2++;

	if (len1 == len2)
	{
		return (0);
	}
	else if (len1 > len2)
	{
		return (15);
	}
	else
	{
		return (-15);
	}
}
