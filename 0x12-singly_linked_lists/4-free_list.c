#include "lists.h"

/**
 * free_list - free the list_t list
 *
 * @head: the pointer to the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	size_t *t;

	free(t->str);
	free(t->len);
	free(t->next);
}
