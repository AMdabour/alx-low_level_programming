#include <stdio.h>

/**
 * main - emtry point
 *
 * Description: print lowercase letters except q and e.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'q' || letter != 'e')
		{
			putchar(letter);
			letter++;
		}
		else
		{
			letter++;
		}
	}
	return (0);
}
