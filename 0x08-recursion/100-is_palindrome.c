#include "main.h"

int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - check if a string is palindrome or not
 *
 * @s: the string to be checked
 *
 * Return: 1 if palindrome 0 if not
*/

int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 0, strlen(s) - 1));
}

/**
 * is_palindrome_helper - helper function
 *
 * @s: the string to be checked
 *
 * @start: the start of the string
 *
 * @end: the end of the string
 *
 * Return: 1 if palindrome 0 if not
*/

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_helper(s, start + 1, end - 1));
}
