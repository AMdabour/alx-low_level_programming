#include "main.h"

/**
 * _puts - print string
 *
 * @str: string
*/

void _puts(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
