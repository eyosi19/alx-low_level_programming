#include <stdio.h>
#include <stdlib.h>
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
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}

	return (c);
}
