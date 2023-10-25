#include "dog.h"

/**
 * init_dog - initialises a struct with variables
 * @d: pointer to the struct
 * @name: first variable
 * @age: second variable
 * @owner: third variable
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
