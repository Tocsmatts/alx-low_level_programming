#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints dogs details
 * @d: details
 * Description: Details of the dog are printed
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("(nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (!(d->age))
			printf("(nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (!(d->owner))
			printf("(nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
