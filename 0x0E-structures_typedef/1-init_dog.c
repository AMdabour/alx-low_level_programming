#include "dog.h"

/**
 * init_dog - a function to initialize a variable of type struct dog
 * @d: a variable of type struct dog
 * @name: name
 * @age: age
 * @owner: owner argument
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/**
	 * struct dog *d - variable of type struct dog
	 * @name: first member
	 * @owner: second member
	 * @age: third member
	 * Description: variable of type struct dog conta.. three members
	 */

	struct dog *d;

	d->name = name;
	d->owner = owner;
	d->age = age;
}
