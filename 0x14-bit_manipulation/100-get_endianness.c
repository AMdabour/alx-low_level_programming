#include "main.h"

/**
 * get_endianness - checks the indianness
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int indian = 1;
	char *c = (char *) &indian;

	return (*c);
}
