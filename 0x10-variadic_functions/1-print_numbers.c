#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function to print numbers passed to it
 * @separator: a string to be printed between numbers
 * @n: the count of numbers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	if (n == 0)
		return;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	va_end(list);

	printf("\n");
}
