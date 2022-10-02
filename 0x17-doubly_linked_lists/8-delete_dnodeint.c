#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list
 * @head: pointer to pointer to a linked list
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *walk, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	walk = *head;
	while (index--)
	{
		walk = walk->next;
		if (walk == NULL)
			return (-1);
	}

	walk->prev->next = walk->next;
	if (walk->next != NULL)
		walk->next->prev = walk->prev;
	free(walk);
	return (1);
}
