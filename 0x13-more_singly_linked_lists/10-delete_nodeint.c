#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 *
 * @head: pointer to the head list
 *
 * @index: the index to be deleted
 *
 * Return: 1 if succeeded, 0 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	current = *head;
	prev = NULL;

	if (head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}

		prev = current;
		current = current->next;
		i++;
	}

	return (-1);
}

