#include "main.h"

/**
 * leet - encodes string into 1337
 *
 * @c: the string to be incoded
 *
 * Return: the leet encoded string
*/

char *leet(char *c)
{
	int i, j;

	char p1[] = "aAeEoOtTlL";
	char p2[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == p1[j])
			{
				c[i] = p2[j];
			}
		}
	}

	return (c);
}
