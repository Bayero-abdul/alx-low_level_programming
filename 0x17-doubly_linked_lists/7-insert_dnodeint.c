#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at given index idx
 * @h: pointer to pointer to linked list
 * @idx: index to insert at
 * @n: value to insert
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t i = 0;
	dlistint_t *new_node, *walk = NULL;


	if (idx == 0)
		return (add_dnodeint(h, n));

	walk = *h;
	while (i++ < idx && walk != NULL)
		walk = walk->next;

	if (walk == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	new_node->prev = walk->prev;
	walk->prev = new_node;
	new_node->next = walk;
	if (new_node != NULL)
		new_node->prev->next = new_node;
	else
		*h = new_node;

	return (new_node);
}
