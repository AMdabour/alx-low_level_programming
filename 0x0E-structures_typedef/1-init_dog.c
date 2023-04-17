#include "dog.h"

/**
 * init_dog - a function to initialize a variable of type struct dog
 * @d: a variable of type struct dog
 * @name: name
 * @age: age
 * @owner: owner argument
 *
 * Description: initialize struct dog with the provided values
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->owner = owner;
	d->age = age;
}
