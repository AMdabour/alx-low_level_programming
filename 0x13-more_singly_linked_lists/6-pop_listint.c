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

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;

	*head = current->next;

	return (current->n);
}
