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
	char *name_cpy, *owner_cpy;
	dog_t *another_dog = malloc(sizeof(*another_dog));
	int i;

	if (!another_dog)
		return (NULL);

	name_cpy = malloc(sizeof(*name_cpy) * (strlen(name) + 1));
	owner_cpy = malloc(sizeof(*owner_cpy) * (strlen(owner) + 1));
	if (!name_cpy)
	{
		free(owner_cpy);
		free(another_dog);
		return (NULL);
	}
	else if (!owner_cpy)
	{
		free(name_cpy);
		free(another_dog);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		name_cpy[i] = name[i];
	name_cpy[i] = '\0';

	for (i = 0; owner[i]; i++)
		owner_cpy[i] = owner[i];
	owner_cpy[i] = '\0';

	another_dog->name = name_cpy;
	another_dog->age = age;
	another_dog->owner = owner_cpy;

	return (another_dog);
}
