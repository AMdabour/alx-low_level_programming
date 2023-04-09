#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: the first string
 *
 * @src: the second string
 *
 * Return: dest after concatenation
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;

	char *s;

	while (dest[i] != '\0')
	{
		i++;
	}

	s = dest + i;

	while (*src != '\0')
	{
		*s++ = *src++;
	}

	*s = '\0';

	return (dest);
}
