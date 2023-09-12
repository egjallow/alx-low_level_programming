#include "dog.h"

/**
 * init_dog - function forstruct dog
 * @d: pointer argument passed from main
 * @name: name of the dog
 * @age: passed from main
 * @owner: passed from main
 * Description: function that initialize type struct dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (1);
	d->name = name;
	d->age = age;
	d->owner = owner;
};
