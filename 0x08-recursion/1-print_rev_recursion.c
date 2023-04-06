#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: the string to be printed in reverse
*/

void _print_rev_recursion(char *s)
{
	int i = strlen(s);

	i--;

	if (i >= 0)
	{
		_putchar(s[i]);
		_print_rev_recursion(s);
	}
}
