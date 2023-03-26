#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the largest prime factor
 *
 * Return: largest prime factor
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

	printf("%lld", i);

	return (0);
}
