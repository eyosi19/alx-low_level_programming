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
	listint_t *current, *prev, *temp;
	unsigned int i = 0;

	current = *head;
	prev = current;

	if ((*head) && index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	while (current)
	{
		temp = current;

		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}

		current = current->next;
		prev = temp;
		i++;
	}

	return (-1);
}

