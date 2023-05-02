#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head node
 * @head: the case list
 * Return: the data(n) of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	n = current->n;
	*head = current->next;

	free(current);

	return (n);
}
