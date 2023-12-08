#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the number of the elements of a list
 *
 * @h: the linked list
 *
 * Return: the number of element of a single list
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}

	return (c);
}

