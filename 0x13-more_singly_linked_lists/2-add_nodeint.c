#include "lists.h"

/**
 * add_nodeint - add a new integer to the list
 *
 * @head: the head
 *
 * @n: the new node
 *
 * Return: the address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *t;

	t = malloc(sizeof(listint_t));

	if (t == NULL)
	{
		return (NULL);
	}

	t->n = n;
	t->next = *head;
	*head = t;

	return (t);

}
