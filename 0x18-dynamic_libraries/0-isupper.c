#include "main.h"
#include <ctype.h>

/**
 * _isupper - check if char is uppercase letter or not
 *
 * @c: the character to check.
 *
 * Return: 1 if uppercase and 0 if not
*/

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
