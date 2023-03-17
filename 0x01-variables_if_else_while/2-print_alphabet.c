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
	int letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
