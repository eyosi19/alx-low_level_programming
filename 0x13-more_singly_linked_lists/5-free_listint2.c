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
	listint_t *current, *next;

	if (head == NULL || *head || NULL)
	{
		return;
	}

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = (NULL);
}
