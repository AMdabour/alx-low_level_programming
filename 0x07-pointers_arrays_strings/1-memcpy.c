#include "main.h"

/**
 * _memcpy - copy memory area
 *
 * @dest: buffer string
 *
 * @src: source string
 *
 * @n: number of characters to be copied
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	char *p = dest + j;

	for (i = 0; i < n; i++)
	{
		*p++ = *src++;
	}

	return (dest);
}
