#include "main.h"

/**
 * puts_half -prints the second half of string
 *
 * @str: the string to halfly printed
*/

void puts_half(char *str)
{
	int L = strlen(str);

	int j, n;

	if (L % 2 == 0)
	{
		n = L / 2;
		for (j = n; j < L; j++)
		{
			_putchar(str[j]);
		}
	}

	else
	{
		n = (L - 1) / 2;
		for (j = n + 1; j < L; j++)
		{
			_putchar(str[j]);
		}
	}
}
