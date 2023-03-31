#include "main.h"

/**
 * cap_string - capitalize every word
 *
 * @c: the string
 *
 * Return: the string after capitalization
*/

char *cap_string(char *c)
{
	int i;

	if (c[0] >= 'a' && c[0] <= 'z')
	{
		c[0] -= 32;
	}

	for (i = 0; i < strlen(c); i++)
	{
		if (c[i] >= 32 && c[i] <= 34 || c[i] == '\n'
		|| c[i] == 40 || c[i] == 41 || c[i] == 44 ||
		c[i] == 46 || c[i] == 59 || c[i] == 63 ||
		c[i] == 123 || c[i] == 125 || c[i] == '	')
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
			{
				c[i + 1] -= 32;
			}
			else
			{
				continue;
			}
		}
		else
		{
			continue;
		}
	}

	return (c);
}
