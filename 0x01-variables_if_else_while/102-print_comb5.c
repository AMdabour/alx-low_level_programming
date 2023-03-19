#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int d1, d2, d3, d4;

	d1 = 0;
	while (d1 <= 9)
	{
		d2 = 0;
		while (d2 <= 8)
		{
			d3 = 0;
			while (d3 <= 9)
			{
				d4 = 0;
				while (d4 <= 9)
				{
					if (d1 + d2 < d3 + d4)
					{
					putchar(d1 + '0');
					putchar(d2 + '0');
					putchar(' ');
					putchar(d3 + '0');
					putchar(d4 + '0');
					if (d1 + d2 + d3 + d4 != 35)
					{
					putchar(',');
					putchar(' ');
					}
					}
					d4++;
				}
				d3++;
			}
			d2++;
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
