#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds new node at the beginning of a list
 * @head: the list
 * @str: string
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
