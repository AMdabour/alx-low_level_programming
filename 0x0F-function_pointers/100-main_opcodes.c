#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: count
 * @argv: vector
 * Return: 0 (on Success)
 */
int main(int argc, char *argv[])
{
	int bytes, L;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (L = 0; L < bytes; L++)
	{
		if (L == (bytes - 1))
		{
			printf("%02hhx\n", arr[L]);
			break;
		}
		printf("%02hhx ", arr[L]);
	}

	return (0);
}
