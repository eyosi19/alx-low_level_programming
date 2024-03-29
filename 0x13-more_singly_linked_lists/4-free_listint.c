#include "lists.h"

/**
 * free_listint - free the listint_t list
 *
 * @head: the pointer to the list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
