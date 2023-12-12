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
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}

