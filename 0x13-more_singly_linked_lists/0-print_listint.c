#include "lists.h"

/**
 * print_listint - prints all the elements
 *
 * @h: the int argument
 *
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

