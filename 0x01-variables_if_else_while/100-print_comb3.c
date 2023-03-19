#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int d1, d2;

	d1 = 0;
	while (d1 <= 9)
	{
		d2 = 0;
		while (d2 <= 9)
		{
			if (d1 != d2 && d1 < d2)
			{
				putchar(d1 + '0');
				putchar(d2 + '0');
				if (d1 + d2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d2++;
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
