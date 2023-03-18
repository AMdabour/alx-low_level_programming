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
	while (i < 10)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
