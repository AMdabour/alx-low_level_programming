#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string to be reversed
 *
 * Return: the reversed string
*/

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	int c;

	char o[i];

	int j = 0;

	for (c = i - 1; c >= 0; c--)
	{
		o[j] = s[c];
		j++;
	}

	return (o);
}
