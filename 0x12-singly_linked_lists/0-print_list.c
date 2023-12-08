#include "main.h"

/**
 * print_list - prints all in the list
 *
 * @h: the pointer to the list_t
 *
 * Return: the number of the strings
 */

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		n++;
		h = h->next;
	}

	return (n);
}
