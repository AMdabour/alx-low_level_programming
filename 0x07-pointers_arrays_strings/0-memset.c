#include "main.h"

/**
 * _memset - function to fill the memory with constant byte
 *
 * @s: pointer to the memory address to be filled
 *
 * @b: filling character
 *
 * @n: number of bytes to be filled
 *
 * Return: memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	char *p = s;

	for (i = 0; i < n; i++)
	{
		*p++ = b;
	}

	*p = '\0';

	return (p);
}
