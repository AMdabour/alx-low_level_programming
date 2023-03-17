#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints a message the write function.
 *
 * Return: Always 1 (to indicate an error)
 */

int main(void)

{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, msg, 59);
	return (1);
}
