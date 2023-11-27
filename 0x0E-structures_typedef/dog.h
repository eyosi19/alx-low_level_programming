#ifndef __DOG_H__
#define __DOG_H__
/**
 * struct dog - the name of the struct
 *
 * @name: the name
 *
 * @age: the age
 *
 * @owner: the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, caht *owner);

#endif
