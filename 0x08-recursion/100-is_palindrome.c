#include "main.h"

int _strlen_recursions(char *s);
int check_pal(char *s, int i, int len);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: the string
 *
 * Return: if it is palindrome
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursions(s)));
}

/**
 * _strlen_recursions - returns the length of the a string
 *
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen_recursions(char *s)
{
	if (*s == '\n')
	{
		return (0);

	}
	return (1 + _strlen_recursions(s + 1));
}

/**
 * check_pal - returns if its pal or not
 *
 * @s: the string
 *
 * @i: itertative
 *
 * @len: the length
 *
 * Return: if its pal or not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_pal(s, i + 1, len - 1));
}
