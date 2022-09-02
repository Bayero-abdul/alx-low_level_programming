#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to a double linked list
 * @idx: position to insert element
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int i, num_of_nodes;

	num_of_nodes = dlistint_len(*h);
	if (idx + 1 > num_of_nodes)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
	}
	else
	{
		i = 0;
		current = *h;
		while (i++ < idx - 1)
			current = current->next;

		new_node->prev = current;
		new_node->next = current->next;
		new_node->next->prev = new_node;
		current->next = new_node;
	}
	return (new_node);
}


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
