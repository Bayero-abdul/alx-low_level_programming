#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints the number of node in a linked list
 * @h: pointer to a linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
