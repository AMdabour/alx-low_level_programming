#include "main.h"

/**
 * _strncat - concatenate two strings according to n value
 *
 * @dest: the first string
 *
 * @src: the second string
 *
 * @n: number of characters to be added
 *
 * Return: dest after concatenation
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	char *s;

	while (dest[i] != '\0')
	{
		i++;
	}

	s = dest + i;

	for (j = 0; j < n && *src != '\0'; j++)
	{
		*s++ = *src++;
	}

	*s = '\0';

	return (dest);
}
