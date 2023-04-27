#include "lists.h"

/**
 * list_len - a func to return the num of elements in a list
 * @h: the case list
 * Return: num of elements in linked list
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		n++;
	}

	return (n);
}
