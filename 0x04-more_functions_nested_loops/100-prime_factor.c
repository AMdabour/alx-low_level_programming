#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the largest prime factor
 *
 * Return: 0 on success
*/

int main(void)
{
	long long int num = 612852475143;

	long long int i;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num /= i;
			i--;
		}
	}

	printf("%lld\n", i);

	return (0);
}
