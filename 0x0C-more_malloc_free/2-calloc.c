#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of elements in the array
 * @size: the size of each element
 * Return: a pointer to the array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
