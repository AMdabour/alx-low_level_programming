#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: the num to check
 */
void print_times_table(int n)
{
	int i, x, res;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (x = 0; x <= n; x++)
		{
			res = i * x;
			printf("%d", res);
			if (x != n)
			{
				if (res < 10)
					printf(",   ");
				else if (res >= 10 && res < 100)
					printf(",  ");
				else
					printf(", ");
			}
		}
		printf("\n");
	}
}
