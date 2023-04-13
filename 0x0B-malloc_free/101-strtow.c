#include "main.h"

/**
 * strtow - turns string into words
 * @str: the string to be turned
 * Return: array of words
*/

char **strtow(char *str)
{
	unsigned int i, j, len;

	char **ptr, **temp;

	len = strlen(str);

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	ptr = (char **) malloc(len * sizeof(char *));

	if (ptr == NULL)
	{
		return (NULL);
	}

	temp = ptr;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j] != ' '; j++)
			{
				**temp++ = str[j];
			}
			**temp = '\0';
		}
	}

	return (ptr);
}
