#include "main.h"
void main_helper(int cents, int coins);

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int cents1, coins1 = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents1 = atoi(argv[1]);

	main_helper(cents1, coins1);

	return (0);
}

void main_helper(int cents, int coins)
{
	while (cents > 0)
	{
		if (cents >= 2)
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
}
