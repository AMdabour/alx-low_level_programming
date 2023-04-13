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
	unsigned int len1, len2, len;

	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + (n < len2 ? n : len2);
	ptr = (char *) malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	strncpy(ptr, s1, len1);
	strncat(ptr, s2, (n < len2 ? n : len2));
	ptr[len - 1] = '\0';

	return (ptr);
}
