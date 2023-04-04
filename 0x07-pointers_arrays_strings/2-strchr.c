#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string
 *
 * @c: the character to be located
 *
 * Return: pointer to the character
*/

char *_strchr(char *s, char c)
{
	unsigned long int j = 0;

	int i, d = 0, n, o = 0;

	char p[];

	while (s[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j && d == 0; i++)
	{
		if (s[i] == c)
		{
			for (n = i; n < j; n++)
			{
				p[o] = s[n];
				o++;
			}

			p[o] = '\0';
			d = 1;
		}
		else
		{
			continue;
		}
	}

	if (p != NULL)
	{
		return (p);
	}
	else
	{
		return (NULL);
	}
}
