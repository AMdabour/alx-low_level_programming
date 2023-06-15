#include "lists.h"

/**
 * print_dlistint - pritns all elements of a list
 * @h: the list to print
 * Return: num of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *tmp = h;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}

	return (i);
}
