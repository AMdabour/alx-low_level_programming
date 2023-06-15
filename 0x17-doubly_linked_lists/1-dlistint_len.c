#include "lists.h"

/**
 * dlistint_len - returns the num of elements in a list
 * @h: the list to check
 * Return: num of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *tmp = h;

	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}

	return (i);
}
