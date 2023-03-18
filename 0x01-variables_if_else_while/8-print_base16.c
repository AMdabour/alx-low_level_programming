#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all numbers of base 16 .
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;

	char c;

	while (i < 16)
	{
		if (i < 10)
		{
			putchar(i);
			i++;
		}
		else
		{
			c = i - 10 + 'a';
			putchar(c);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
