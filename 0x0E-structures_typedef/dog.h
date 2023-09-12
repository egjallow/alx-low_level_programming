#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: name of the dog
 * @age: age in float
 * @owner: owner of the dog
 *
 * Description: Its structure for a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#include <stdio.h>
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
