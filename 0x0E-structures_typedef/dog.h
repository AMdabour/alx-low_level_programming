#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure named dog
 * @name: first member
 * @owner: second member
 * @age: third member
 *
 * Description: structure containing three members
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
