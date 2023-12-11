#include "lists.h"

/**
 * free_list - free the listint_t list
 *
 * @head: the pointer to the list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *n;

	while ((n = head) != NULL)
	{
		head = head->next;
		free(n->n);
		free(n);
	}
}
