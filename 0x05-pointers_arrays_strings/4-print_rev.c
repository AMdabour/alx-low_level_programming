#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: string
*/

void print_rev(char *s)
{
	long int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
