#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
		_putchar(ch + '0');
		ch++;
	_putchar('\n');
}
