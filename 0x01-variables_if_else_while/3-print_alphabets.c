#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lowercase and uppercase letters.
 *
 * Return: Always 0 (success)
*/


int main(void)
{
	int letter, letter1;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter1 = 'A';
	while (letter1 <= 'Z')
	{
		putchar(letter1);
		letter1++;
	}
	putchar('\n');
	return (0);
}
