#include "main.h"

/**
 * print_alphabet - uses _putchar function to print lowercase letters
*/

void print_alphabet(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
		_putchar(ch);
		ch++;
	_putchar('\n');
}
