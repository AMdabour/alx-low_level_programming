#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check if char is digit or not
 *
 * @c: the character to check.
 *
 * Return: 1 if digit and 0 otherwise
*/

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
