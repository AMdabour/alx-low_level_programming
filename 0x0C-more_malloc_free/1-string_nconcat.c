#include "main.h"
/**
 * string_nconcat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of characters to be concatenated
 * Return: the new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1), len2 = strlen(s2), i;

	char *ptr, *tmp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len2)
	{
		ptr = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
		if (ptr == NULL)
			return (NULL);
		tmp = ptr;
		for (i = 0; i < (len1 + len2 + 1); i++)
		{
			if (*s1 != '\0')
				*tmp++ = *s1++;
			else
				*tmp++ = *s2++;
		}
		*tmp = '\0';
		return (ptr);
	}
	else
	{
		ptr = (char *) malloc(sizeof(char) * (len1 + n + 1));
		if (ptr == NULL)
			return (NULL);
		tmp = ptr;
		for (i = 0; i < (len1 + n + 1); i++)
		{
			if (*s1 != '\0')
				*tmp++ = *s1++;
			else
				*tmp++ = *s2++;
		}
		*tmp = '\0';
	}
	return (ptr);
}
