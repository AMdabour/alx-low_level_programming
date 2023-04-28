#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_list - a function to print elements of a struct
 * @h: the case element
 * Return: num of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		else
			printf("[0] (nil)\n");

		current = current->next;
		n++;
	}

	return (n);
}
