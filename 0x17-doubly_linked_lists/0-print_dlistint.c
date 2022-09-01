#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - deletes the node at index index of a dlistint_t linked list
 * @h: pointer to a double linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_of_nodes = 0;

	if (!h)
		return (num_of_nodes);

	while (h)
	{
		printf("%d\n", h->n);
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
