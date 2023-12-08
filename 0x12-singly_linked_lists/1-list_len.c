#include "lists.h"

/**
 * list_len - list the length of the single link list
 *
 * @h: pointer to the struct
 *
 * Return: the number of the single link list
 */

size_t list_len(const list_h *h)
{
	size_t n;

	n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
