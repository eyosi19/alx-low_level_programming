#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print the struct dog
 *
 * @d: is the pointer d
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
