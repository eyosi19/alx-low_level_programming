#include "lists.h"

/**
 * listint_len - return the number of elements in a linked list
 *
 * @h: the integer
 *
 * Return: the number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
