#include "dog.h"

/**
 * init_dog - struct named dog
 * @d: d dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Description for the struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
