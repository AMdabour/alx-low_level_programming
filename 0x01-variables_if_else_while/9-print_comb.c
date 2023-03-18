#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers.
 *
 * Return: Always 0 (success)
*/


int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
