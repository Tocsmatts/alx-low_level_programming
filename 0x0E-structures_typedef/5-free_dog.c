#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: a parameter
 * Description: Describes the struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d->age);
	}
}
