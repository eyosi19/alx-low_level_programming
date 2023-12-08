#include "lists.h"

/**
 * free_list - free the list_t list
 *
 * @head: the pointer to the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *n;

	while ((n = head) != NULL)
	{
		head = head->next;
		free(n->str);
		free(n);
	}
}
