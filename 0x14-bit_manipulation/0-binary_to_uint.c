#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - from binary to unsigned int
 * @b: binary num
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	size_t l = 0, d;
	const char *tmp = b;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	while (*tmp++ != '\0')
	{
		l++;
	}

	for (d = 0; d < l; d++)
	{
		if (b[d] != '1' && b[d] != '0')
			return (0);
		else
			continue;
	}

	for (d = 0; d < l; d++)
	{
		res <<= 1;
		if (b[d] == '1')
			res += 1;
	}

	return (res);
}
