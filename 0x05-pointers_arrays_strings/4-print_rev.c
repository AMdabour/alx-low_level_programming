#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: string
*/

void print_rev(char *s)
{
	unsigned long int i;

	for (i = strlen(s) - 1; i < strlen(s) && i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
