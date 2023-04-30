#include "lists.h"

/**
 * listint_len - returns num of elements in a linked list
 * @h: the case list
 * Return: num of element
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		n++;
	}

	return (n);
}
