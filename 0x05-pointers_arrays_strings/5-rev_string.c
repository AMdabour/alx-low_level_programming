#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string to be reversed
*/

void rev_string(char *s)
{
	int i = 0, c, j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	char o[];

	for (c = i - 1; c >= 0; c--)
	{
		o[j] = s[c];
		s[j] = o[j];
		j++;
	}
}
