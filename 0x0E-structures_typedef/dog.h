#ifndef DOG_H
#define DOG_H

/**
 * struct my_struct - Short description
 * @name: name of the dog
 * @age: age in float
 * @owner: owner of the dog
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#include <stdio.h>
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
