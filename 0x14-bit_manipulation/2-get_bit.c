#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number to be checked
 * @index: the index to be checked
 * Return: value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	if (index > sizeof(n) * 8)
		return (-1);

	bitvalue = (n >> index) & 1;

	return (bitvalue);
}
