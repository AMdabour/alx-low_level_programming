#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: the list to check
 * @n: a data for the new node
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *node;

	tmp = *head;
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!*head)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
		node->prev = tmp;
	}

	return (node);
}
