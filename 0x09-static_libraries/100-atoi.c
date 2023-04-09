#include "main.h"

/**
 * _atoi - convert a string to integer
 *
 * @s: the string to be converted
 *
 * Return: the integer value
*/

int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	unsigned int num = 0;
	int f = 0;
	int d = 0;
	int sign = 1;

	while (s[j] != '\0')
	{
		j++;
	}

	for (; i < j && d == 0; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			f = s[i] - '0';

			d = (s[i + 1] == '\0' || s[i + 1] < '0' ||
					s[i + 1] > '9') ? 1 : 0;
		}

		num = num * 10 + f;
	}

	return (sign * num);
}
