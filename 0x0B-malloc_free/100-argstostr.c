#include "main.h"

/**
 * argstostr - concatenates all arguments of your program
 * @ac: the number of arguments
 * @av: array of arguments
 * Return: pointer to concatenated string
*/
char *argstostr(int ac, char **av)
{
	unsigned int i, j, len;

	char *ptr, *tmp;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	ptr = (char *)malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	tmp = ptr;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			*(tmp++) = av[i][j];
		*(tmp++) = '\n';
	}
	*(tmp) = '\0'

	return (ptr);
}
