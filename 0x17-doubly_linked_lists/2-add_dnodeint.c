#include "lists.h"

/**
 * add_dnodeint - adds a node at the big of a list
 * @head: the list to check
 * @n: a data for the new node
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (node);
	}
	else
	{
		node->next = *head;
		(*head)->prev = node;
		*head = node;
	}

	return (node);
}
