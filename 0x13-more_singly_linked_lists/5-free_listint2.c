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
	listint_t *current = *head;
	listint_t *n_node;


	while (current != NULL)
	{
		n_node = current->next;
		free(current);
		current = n_node;
	}

	*head = (NULL);
}
