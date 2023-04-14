#include "main.h"
/**
 * _realloc - reallocate memory for previously allocated one
 * @ptr: pointer to the previously allocated space
 * @old_size: the old space
 * @new_size: the new space should be allocated
 * Return: pointer to  the newly allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	memcpy(nptr, ptr, (new_size < old_size ? new_size : old_size));
	free(ptr);

	return (nptr);
}
