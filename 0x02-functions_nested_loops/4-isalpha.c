#include "main.h"

/**
 * _isalpha - checks if the char is alphabetic or not
 *
 * @c: the character to check.
 *
 * Return: 1 in case of alphabet or 0 otherwise
*/

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
