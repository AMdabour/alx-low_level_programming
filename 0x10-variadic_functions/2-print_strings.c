#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings passed to it
 * @separator: a string to be printed between strings passed
 * @n: number of strings passes
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (*(va_arg(list, char)) != NULL)
		{
			printf("%s", *(va_arg(list, char));

			if (separator != NULL && i != (n - 1))
				printf("%s", separator);
		}
		else
		{
			printf("(nil)");

			if (separator != NULL && i != (n - 1))
				printf("%s", separator);
		}
	}

	va_end(list);

	printf("\n");
}
