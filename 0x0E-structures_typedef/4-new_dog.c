#include <stdlib.h>
#include "dog.h"


/**
 * _strlen - returns length of string
 *
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * _strcpy - copy string
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}


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

	newDog = malloc(sizeof(dog_t));

	if (!newDog)
	{
		return (NULL);
	}

	newDog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!newDog->name)
	{
		free(newDog);
		return (NULL);
	}
	newDog->name = _strcpy(newDog->name, name);

	newDog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->owner = _strcpy(newDog->owner, owner);

	newDog->age = age;

	return (newDog);
}

