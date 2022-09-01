#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to a double linked list
 * @index: is the index of the node, starting from 0
 * Return: if the node does not exist, return NULL else return Node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head)
	{
		i = 0;
		while (head)
		{
			if (i == index)
				return (head->n);
			head = head->next;
			i++;
		}

		return (NULL);
	}
}
