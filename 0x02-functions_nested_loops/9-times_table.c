#include "main.h"

/**
 * times_table - print 9 times table
*/

void times_table(void)
{
	int i, j, o;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			o = i * j;
			if (j == 0)
			{
				_putchar(o + '0');
			}
			if (o < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			}
			else if (o >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(o / 10 + '0');
				_putchar(o % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
