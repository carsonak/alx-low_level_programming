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

		printf("Age: %f\n", d->age);

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %s\n", "(nil)");
	}
}
