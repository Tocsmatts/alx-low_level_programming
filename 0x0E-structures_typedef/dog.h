#ifndef _DOG_H_
#define _DOG_H_

#include <stdlib.h>

/**
 * dog_t - another struct defined
 */
typedef struct dog dog_t;

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
dog_t *new_dog(char *name, float age, char *owner);

#endif
