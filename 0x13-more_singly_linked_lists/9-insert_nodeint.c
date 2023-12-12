#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node to a given index
 *
 * @head: pointer to the pointer to the head of the list
 *
 * @idx: the index to put
 *
 * @n: value to store
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node, *current;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}

	current = *head;

	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->next = current->next;
	current->next = n_node;
	return (n_node);
}
