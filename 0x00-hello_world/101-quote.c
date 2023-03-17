#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints a message followed by the author and date to the standard error.
 *
 * Return: Always 1 (to indicate an error)
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1,msg,57);
	return (1);
}
