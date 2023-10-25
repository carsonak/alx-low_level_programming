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
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", "(nil)");

		if (d->age)
			printf("Name: %f\n", d->age);
		else
			printf("Name: %s\n", "(nil)");

		if (d->owner)
			printf("Name: %s\n", d->owner);
		else
			printf("Name: %s\n", "(nil)");
	}
}
