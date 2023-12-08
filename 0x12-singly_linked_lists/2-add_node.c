#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - add a new node
 *
 * @head: the original link
 *
 * @str: the str to add
 *
 * Return: the address of the new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *t;
	int l = 0;

	t = malloc(sizeof(list_t));

	if (t == NULL)
	{
		return (NULL);
	}

	while (str[l])
	{
		l++;
	}

	t->len = l;
	t->str = strdup(str);
	t->next = *head;
	*head = t;

	return (t);
}
