#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: the case list
 * Return: a pointer to the first node on the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
