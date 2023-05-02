#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all data in a list
 * @head: the case list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	size_t sum = 0;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
