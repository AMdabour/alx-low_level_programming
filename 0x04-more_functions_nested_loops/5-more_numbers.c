#include "main.h"

/**
 * more_numbers - print from 0 to 14 with 14 interation
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
