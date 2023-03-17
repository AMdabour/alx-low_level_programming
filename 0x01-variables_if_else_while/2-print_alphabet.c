#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lowercase letters by putchar function.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		putchar("\n");
		letter++;
	}
	return (0);
}
