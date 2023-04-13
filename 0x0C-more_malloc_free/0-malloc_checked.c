#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: the number of bytes to be reserved from the memory
 * Return: a pointer to the address of the allocated space
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
