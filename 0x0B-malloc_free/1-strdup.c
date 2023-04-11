#include "main.h"

/**
 * _strdup - eturns a pointer to a copy of a given string
 * @str: the string to be copied
 * Return: the copy of the string
*/

char *_strdup(char *str)
{
	unsigned int i;

	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = (char *) malloc(strlen(str) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(str); i++)
	{
		*(ptr + i) = *(str + i);
	}

	return (ptr);
}
