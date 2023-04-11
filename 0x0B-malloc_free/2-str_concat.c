#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the newly string
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr = s1 + strlen(s1);

	unsigned int i;

	if (s2 == NULL)
	{
		return (s1);
	}

	ptr = (char *) malloc(strlen(s2) * sizeof(char) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < strlen(s2); i++)
	{
		*(ptr + i) = *(s2 + i);
	}

	*(ptr + i) = '\0';

	return (s1);
}
