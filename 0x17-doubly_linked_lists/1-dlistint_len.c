#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked
 * @h: pointer to a double linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num_of_nodes = 0;

	if (!h)
		return (num_of_nodes);

	while (h)
	{
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
