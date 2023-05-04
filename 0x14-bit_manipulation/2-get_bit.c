#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number to be checked
 * @index: the index to be checked
 * Return: value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index >= sizeof(n) * 8)
		return (-1);

	if (n == 0 && index < sizeof(n) * 8)
		return (0);

	for (i = ((sizeof(n) * 8) - 1); i > 0; i--)
	{
		if ((n >> i & 1))
			break;
	}

	for (; i >= index; i--)
	{
		if (i == index)
			return ((n >> i & 1 ? 1 : 0));
	}

	return (-1);
}
