#include "dog.h"

/**
 * new_dog - creates a struct dog and initialises it
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to the new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nm = name;
	char *ownr = ownr;
	dog_t *another_dog = malloc(sizeof(*another_dog));

	if (!another_dog)
		return (NULL);

	another_dog->name = nm;
	another_dog->age = age;
	another_dog->owner = ownr;

	return (another_dog);
}
