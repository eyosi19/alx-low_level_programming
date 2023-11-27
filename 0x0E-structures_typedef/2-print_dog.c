#include <stdio.h>

/**
 * print_dog - print the struct dog
 *
 * @d: is the pointer d
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		return;
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
