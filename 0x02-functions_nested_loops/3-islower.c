#include "main.h"

/**
 * _islower - check if the character is lowercase or not
 *
 * @c: the character to check.
 *
 * Return: 1 (true) or 0 (false)
*/

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
