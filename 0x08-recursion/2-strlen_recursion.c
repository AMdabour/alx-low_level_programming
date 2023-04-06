#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the string
 *
 * Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		s++;
		_strlen_recursion(s);
	}
	else
	{
		return (i);
	}
}
