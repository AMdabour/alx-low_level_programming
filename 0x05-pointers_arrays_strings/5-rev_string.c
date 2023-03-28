#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string to be reversed
*/

void rev_string(char *s)
{
	int i = 0, c;

	char o = s[0];

	while (s[i] != '\0')
	{
		i++;
	}

	for (c = 0; c < i; c++)
	{
		i--;
		o = s[i];
		s[i] = s[c];
		s[c] = o;
	}
}
