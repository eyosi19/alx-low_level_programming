#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - init struct dog
 *
 * @d: the pointer d
 *
 * @name: the struct name
 *
 * @age: the struct age
 *
 * @owner: the struct owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
