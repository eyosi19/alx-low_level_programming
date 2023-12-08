#include "lists.h"

/**
 * add_node_end - add a new node at the end of the list
 *
 * @head: pointer to the head of the list
 *
 * @str: string to add the new node
 *
 * Return: the address
 */

list_t *add_node_end(list_t **head, const char *str);
{
	list_t *t, *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->len = 0;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		t = *head;

		while (t->next != NULL)
		{
			t = t->next;
		}

		t->next = new_node;
	}

	return (new_node);
}

