#include "lists.h"

void print_before_main(void) __attribute__((constructor));

/**
 * print_before_main - prints a text before main func
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
