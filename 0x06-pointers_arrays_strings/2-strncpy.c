#include "main.h"

/**
 * _strncpy - copy a string
 *
 * @dest: the first string
 *
 * @src: the second string to be copied
 *
 * @n: the number of characters to be copied
 *
 * Return: the result string
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*p++ = *src++;
	}

	if (i < n)
	{
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}
	}

	else
	{
		dest[i] = '\0';
	}

	return (dest);
}
