#include "lists.h"

/**
 * pop_listint - delete the head of the node
 *
 * @head: pointer to the head of the list
 *
 * Return: data of the deleted data node
 */

int pop_listint(lintint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
