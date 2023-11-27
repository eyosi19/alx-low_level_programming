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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
