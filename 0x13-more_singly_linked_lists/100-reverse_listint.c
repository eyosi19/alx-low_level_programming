#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list
 *
 * @head: pointer to the head
 *
 * Return: a pointer to the first reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL, *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;

		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}
