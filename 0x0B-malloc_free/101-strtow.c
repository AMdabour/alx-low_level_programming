#include "main.h"
unsigned int word_length(unsigned int len, char *str);
/**
 * strtow - turns string into words
 * @str: the string to be turned
 * Return: array of words
*/
char **strtow(char *str)
{
	unsigned int i, j, len = 0;

	char **ptr, **temp;

	word_length(len, str);

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
		if (str[i] != ' ')
		{
			*temp = (char *) malloc((len + 1) * sizeof(char));
			if (*temp == NULL)
				return (NULL);
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
			{
				(*temp)[j - i] = str[j];
			}
			(*temp)[j - i] = '\0';
			temp++;
			i = j;
		}
	}
	*temp = NULL;

	return (ptr);
}

/**
 * word_length - returns the length of string words
 * @str: the string
 * Return: the length
*/

unsigned int word_length(unsigned int len, char *str)
{
	unsigned int i;

	for (i = 0; *(str + i) != "\0"; i++)
	{
		if (str[i] != ' ')
		{
			len++;
		}
	}

	return (len);
}
