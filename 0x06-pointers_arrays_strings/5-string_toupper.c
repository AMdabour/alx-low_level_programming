#include "main.h"

/**
 * string_toupper - turn the lowercase letters to uppercase
 *
 * @c: the string to be turned
 *
 * Return: string with uppercase letters
*/

char *string_toupper(char *c)
{
	int i, j = 0;

	while (c[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}
		else
		{
			continue;
		}
	}

	return (c);
}
