#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * @argc: argument count
 *
 * @argv: array of strings
 *
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i, result = 0;

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

			j++;
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);

	return (0);
}
