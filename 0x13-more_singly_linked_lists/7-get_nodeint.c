#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t link
 *
 * @head: the pointer to the head of the list
 *
 * @index: the index they want to get
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;
	int count = 0;
	listint_t *current;

	current = head;

	if (*head == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	
	if (i == index)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
