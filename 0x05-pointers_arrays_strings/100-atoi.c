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
	int num = 0;
	int f = 0;
	int d = 0;
	int sign = 0;

	for (; i < strlen(s) && d == 0; i++)
	{
		if (s[i] == '+')
		{
			sign++;
		}
		else if (s[i] == '-')
		{
			sign--;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			f = s[i] + '0';

			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				d = 1;
			}
		}

		num = num * 10 + f;
	}

	if (sign >= 0)
	{
		sign = 1;
	}
	else
	{
		sign = -1;
	}

	num == 0 ? 0 : sign * num;
}
