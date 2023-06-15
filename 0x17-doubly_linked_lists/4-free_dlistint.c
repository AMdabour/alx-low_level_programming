#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: the list to check
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head)
	{
		head = head->next;
		free(tmp);
		head->next->prev = NULL;
		tmp = head;
	}

	free(head);
	tmp = NULL;
}
