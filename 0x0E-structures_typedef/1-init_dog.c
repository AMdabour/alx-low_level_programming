#include "dog.h"

/**
 * init_dog - a function to initialize a variable of type struct dog
 * @d: a variable of type struct dog
 * @name: name
 * @age: age
 * @owner: owner argument
 * Return: d variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;

	return (d);
}
