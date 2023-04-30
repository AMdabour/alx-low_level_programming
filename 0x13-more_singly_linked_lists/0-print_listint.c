#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: the case list
 * Return: num if nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		n++;
	}

	return (n);
}
