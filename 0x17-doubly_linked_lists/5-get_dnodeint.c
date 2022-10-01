#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to a pointer to a linked list
 * @index: the index of the node
 * Return: the node at index else return Null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	while (i++ < index && head != NULL)
		head = head->next;

	return (head);
}
