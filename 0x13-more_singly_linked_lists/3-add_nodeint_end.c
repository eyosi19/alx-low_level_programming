#include "lists.h"

/**
 * add_nodeint_end - add a new int node in the end of the list
 *
 * @head: pointer to the head list
 *
 * @n: the new int
 *
 * Return: the address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *t, *new_int;
	
	new_int = malloc(sizeof(listint_t));

	if (new_int == NULL)
	{
		return (NULL);
	}

	new_int->n = n;
	new_int->next = NULL;
	t = *head;

	if (t == NULL)
	{
		*head = new_int;
	}
	else
	{
		t = *head;

		while (t->next != NULL)
		{
			t = t->next;
		}

		t->next = new_int;
	}

	return (*head);
}
