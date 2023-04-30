#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds new node at the beginning of a list
 * @head: the case list
 * @n: int value for the list
 * Return: the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
