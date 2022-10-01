#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * add_dnodeint_end - add node at the end of a list
 * @head: pointer to pointer to a linked list
 * @n: value to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		dlistint_t *walk;

		walk = *head;
		while (walk->next != NULL)
			walk = walk->next;

		walk->next = new_node;
		new_node->prev = walk;
	}
	return (new_node);
}
