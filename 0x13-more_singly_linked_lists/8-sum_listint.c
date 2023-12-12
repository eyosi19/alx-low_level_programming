#include "lists.h"

/**
 * sum_listint - the sum of all the list
 *
 * @head: the pointer to the head
 *
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
