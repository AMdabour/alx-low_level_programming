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

	ptr = (char **) malloc((len + 1) * sizeof(char *));

	if (ptr == NULL)
	{
		return (NULL);
	}

	temp = ptr;

	for (i = 0; str[i] != '\0'; i++)
	{
		*temp = (char *) malloc((len + 1) * sizeof(char));
		if (*temp == NULL)
			return (NULL);
		if (str[i] != ' ')
		{
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
			{
				*(temp)[j - i] = str[j];
			}
			*(temp)[j - i] = '\0';
			temp++;
			i = j;
		}
	}
	*temp = NULL;

	return (ptr);
}
