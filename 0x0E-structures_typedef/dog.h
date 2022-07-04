#ifndef _DOG_H_
#define _DOG_H_

#include <stdlib.h>

/**
 * struct dog - This is a header file
 * @name: Name of dog
 * @age: age of dog
 * @owner: Owner of dog
 *
 * Description: This is a struct file for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
