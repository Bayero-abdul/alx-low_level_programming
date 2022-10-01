#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements in a linked list
 * @h: pointer to linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
