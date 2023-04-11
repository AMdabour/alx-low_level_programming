#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the newly string
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;

	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	ptr = (char *) malloc(strlen(s1) + strlen(s2) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
	{
		*(ptr + i) = *(s1 + i);
	}

	i = 0;

	for (j = strlen(s1); j < (strlen(s1) + strlen(s2)); j++)
	{
		*(ptr + j) = *(s2 + i);
		i++;
	}

	*(ptr + j) = '\0';

	return (ptr);
}
