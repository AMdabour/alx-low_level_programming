#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c:a character
 * Return: a pointer to  to the array on success
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;

	int i;

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr + i = c;
	}

	return (ptr);
}
