#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: the case list
 * Return: a pointer to the first node on the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		listint_t *next = (*head)->next;

		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
