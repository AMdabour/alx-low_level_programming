#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints the content of a list
 * @head: the case list
 * Return: num of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head;
	const listint_t *hare = head;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
			exit(98);
	}

	tortoise = head;

	while (tortoise != NULL)
	{
		printf("%d\n", tortoise->n);
		tortoise = tortoise->next;
		count++;
	}

	return (count);
}
