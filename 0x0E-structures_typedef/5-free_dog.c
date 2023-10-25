#include "dog.h"

/**
 * free_dog - frees memory allocated to a struct
 * @d: pointer to the struct
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
