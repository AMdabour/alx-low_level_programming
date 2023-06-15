#include "lists.h"

/**
 * sum_dlistint - returns the sum of all elements in a list
 * @head: the list to check
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	if (!head)
		return (0);

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
