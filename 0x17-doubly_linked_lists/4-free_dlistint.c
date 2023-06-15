#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: the list to check
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (!head)
		return;

	while (head)
	{
		head = head->next;
		head->next->prev = NULL;
		free(tmp);
		tmp = head;
	}

	free(head);
	tmp = NULL;
}
