#include "main.h"

/**
 * main - entry point
 *
 * Return: ALways 0 (success)
*/

int main(void)
{
	char wor[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)

		_putchar(wor[ch]);

	_putchar('\n');

	return (0);
}
