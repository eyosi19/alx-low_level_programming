#include "lists.h"

/**
 * free_listint2 - free the list after using malloc
 *
 * @head: the head
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
