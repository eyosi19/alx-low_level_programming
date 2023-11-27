#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - the new dog
 *
 * @name: the name of the dog struct
 *
 * @age: the age of the dog struct
 *
 * @owner: the owner
 *
 * Return: newDog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(struct dog));

	if (newDog != NULL)
	{
		newDog->name = strdup(name);
		newDog->age = age;
		newDog->owner = strdup(owner);

		if (newDog->owner == NULL)
		{
			free(newDog->name);
			free(newDog);
			return (NULL);
		}
	}

	return (newDog);
}

