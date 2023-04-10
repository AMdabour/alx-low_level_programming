#include "main.h"
/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]), coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	while (cents > 0)
	{
		if (cents >= 25)
		{
			coins += cents / 25;
			cents %= 25;
		}
		else if (cents >= 10)
		{
			coins += cents / 10;
			cents %= 10;
		}
		else if (cents >= 5)
		{
			coins += cents / 5;
			cents %= 5;
		}
		else if (cents >= 2)
		{
			coins += cents / 2;
			cents %= 2;
		}
		else
		{
			coins += cents;
			cents = 0;
		}
	}

	printf("%d\n", coins);

	return (0);
}
