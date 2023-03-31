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

	char *p[] = {"4", "3", "0", "7", "1"};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == 'A' || c[i] == 'a')
			{
				c[i] = p[0][j];
				break;
			}
			else if (c[i] == 'E' || c[i] == 'e')
			{
				c[i] = p[1][j];
				break;
			}
			else if (c[i] == 'O' || c[i] == 'o')
			{
				c[i] = p[2][j];
				break;
			}
			else if (c[i] == 'T' || c[i] == 't')
			{
				c[i] = p[3][j];
				break;
			}
			else if (c[i] == 'L' || c[i] == 'l')
			{
				c[i] = p[4][j];
				break;
			}
		}
	}

	return (c);
}
