#include "lists.h"

/**
 * print_listint_safe - prints a listint_t liked list safetly
 *
 * @head: the pointer to the head
 *
 * Return: the number of the node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);

		slow = slow->next;
		fast = fast->next->next;

		count++;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}

	return (count);
}
