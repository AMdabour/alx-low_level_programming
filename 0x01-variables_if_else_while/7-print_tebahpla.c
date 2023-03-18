#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lowercase letters in reverse.
 *
 * Return: Always 0 (success)
*/


int main(void)
{
	int letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
