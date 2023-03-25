#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: the size of triangle.
*/

void print_triangle(int size)
{
	int i, j, o;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (o = i; o < size - 1; o++)
			{
				_putchar('.');
			}
			_putchar('#');
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
