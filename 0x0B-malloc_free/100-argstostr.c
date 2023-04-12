#include "main.h"
/**
 * argstostr - turn all argumebts to string
 * @ac: argumebt count
 * @av: argument vector
 * Return: string on success
*/

char *argstostr(int ac, char **av)
{
	unsigned int i, j;

	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	ptr = (char *) malloc(ac * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		ptr[i] = (char *) malloc(strlen(av[i]) * sizeof(char));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);

			return (NULL);
		}
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			ptr[i][j] = av[i][j];
		}
		ptr[i][j] = '\n';
	}

	return (ptr);
}
