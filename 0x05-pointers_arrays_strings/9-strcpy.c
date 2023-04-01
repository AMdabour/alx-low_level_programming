#include "main.h"

/**
 * _strcpy - copy a string in another string
 *
 * @dest: the buffer string
 *
 * @src: the source string
 *
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int l = strlen(src);

	int j;

	int *p = dest;

	for (j = 0; j < l; j++)
	{
		*p++ = *src++;
	}

	*p = '\0';

	return (dest);
}
