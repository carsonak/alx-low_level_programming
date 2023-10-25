#include "dog.h"

/**
 * print_dog - prints elements of a struct dog
 * @d: pointer to the struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s", d->name);
		else
			printf("Name: %s", "(nil)");

		if (d->age)
			printf("Name: %f", d->age);
		else
			printf("Name: %s", "(nil)");

		if (d->owner)
			printf("Name: %s", d->owner);
		else
			printf("Name: %s", "(nil)");
	}
}
