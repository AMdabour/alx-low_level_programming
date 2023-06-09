#include "main.h"

/**
 * _strstr - locates substring
 *
 * @haystack: the string to be checked
 *
 * @needle: the matching substring
 *
 * Return: the matched substring
*/

char *_strstr(char *haystack, char *needle)
{
	char *s = haystack;

	while (*s != '\0')
	{
		char *o = s, *a = needle;

		while (*a != '\0' && *o == *a)
		{
			o++;
			a++;
		}

		if (*a == '\0')
		{
			return (s);
		}

		s++;
	}

	return (NULL);
}
