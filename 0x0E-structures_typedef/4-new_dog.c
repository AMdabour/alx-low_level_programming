#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - pointer to struct dog that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: creates a new dog assigning it's members with
 * the provided values
 * Return: the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);

	strcpy(p->name, name);
	p->age = age;
	strcpy(p->owner, owner);

	return (p);
}
