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
	dog_t another_dog = {nm, age, ownr};

	return (&another_dog);
}
